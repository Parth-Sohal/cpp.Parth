#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main(){
    int numRows;
    cin >> numRows;

    vector<vector<int>> arr;

    for(int i = 0 ;  i < numRows; i++){
        vector<int> ans;
        for(int j = 0 ; j <= i ; j++){
            ans.push_back(1);
        }
        arr.push_back(ans);
    }
    


    for(int i = 2 ;  i < numRows ; i++){
        for(int j = 1 ; j < i ; j++){
            arr[i][j] = arr[i-1][j]  + arr[i-1][j-1];
        }
    }

    for(int i = 0 ;  i < arr.size(); i++){
        // vector<int> ans;
        for(int j = 0 ; j < arr[i].size() ; j++){
            cout << arr[i][j];
        }
        // arr.push_back(ans);
        cout << endl;
    }
}