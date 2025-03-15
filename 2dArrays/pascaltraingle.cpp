#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int comb(int n,int r){
//     int ans =  (factorial(n))/(factorial(r)*factorial(n-r));
//     return ans;
// }


int main(){
   
    vector<vector<int>> arr;

    for(int i = 0 ; i < 5 ; i++){
        vector<int> ans;
        int crn = 1;
        for(int j = 0  ; j <= i ;j++){
            ans.push_back(crn);
            crn = crn * (i-j)/(j+1);
        }
        // cout << endl;
       
        arr.push_back(ans);
        
    }


    // cout << arr.size();

    for(int i = 0 ; i < arr.size() ;i++){
        for(int j = 0 ; j < arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}