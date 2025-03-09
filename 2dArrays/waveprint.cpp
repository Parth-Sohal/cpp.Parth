#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9}};

    for(int i = 0 ; i < arr.size() ;i++){ // Rows No. bata raha hai ye wala
        if(i%2==0){
            for(int j = 0 ; j < arr[0].size() ;j++){
                cout << arr[j][i] << " "; // row no badh raha hai
            }
        }
        else{
            for(int j = arr[0].size()-1 ; j >=0 ;j--){
                cout << arr[j][i] << " "; // row no badh raha hai
            }
        }
        cout << endl;
    }
}