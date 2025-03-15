#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n = 3;

    vector<vector<int>> arr(n,vector<int>(n,0));
    int left = 0;
    int right = arr[0].size()-1;
    int bottom = arr.size()-1;
    int top = 0;

    
    int a = 1;
    while((left<=right) && (top<=bottom)){

        for(int i = left ; i<=right ; i++){
            arr[top][i] = a++;
        }

        top++;
        // cout << endl;

        for(int i = top ; i <= bottom ;i++ ){
            arr[i][right] = a++;
        }

        right--;
        // cout << endl;

        if(top<=bottom){
            for(int i = right ; i >= left ;i--){
                arr[bottom][i] = a++;
            }
            bottom--;
        }

        // cout << endl;
        if(left<=right){
            for(int i = bottom ; i >= top ;i--){
                arr[i][left] = a++;
            } 
            left++;  
        }   
        // cout << endl;
    }
    for(int i = 0 ; i <  n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}