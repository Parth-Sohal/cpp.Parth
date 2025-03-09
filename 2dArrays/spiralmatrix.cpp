#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    

    int top = 0 ; 
    int left = 0;
    int right = matrix[0].size() - 1 ;
    int bottom = matrix.size() - 1 ;
    vector<int> arr;

    while(left<=right && top<=bottom){
        for(int i = left ; i <= right ;i++){
            int element = matrix[left][i];
            arr.push_back(element);
        }
        // cout << endl;
        
        top++;

        for(int i = top ; i <= bottom ;i++){
            arr.push_back(matrix[i][right]);
        }
        // cout << endl;
        
        right--;

        if(top<=bottom){
            for(int i = right ; i >=left ;i--){
                arr.push_back(matrix[bottom][i]);
            } 
            // cout << endl;
        }
        bottom--;

        if(left <= right){
            for(int i = bottom ; i>=top ;i--){
                arr.push_back(matrix[i][left]);
            }
            // cout << endl;
        }
        
        left++;
    }

    for(auto i : arr){
        cout << i << " ";
    }

        
}