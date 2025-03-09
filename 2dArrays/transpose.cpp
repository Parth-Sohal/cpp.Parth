#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {{1,2,3} , {4,5,6} ,{7,8,9}};
    int row = arr.size();
    int col = arr[0].size();
    
    vector<vector<int>> transposeArr(col,vector<int>(row));

    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            transposeArr[i][j] = arr[j][i];
        }
    }
    for(int i = 0 ; i < col ; i++){
        reverse(transposeArr[i].begin(),transposeArr[i].end());
    }
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << transposeArr[i][j] << " ";
        }
        cout << endl;
    }
}