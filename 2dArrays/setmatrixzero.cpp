#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int>> search(vector<vector<int>>& arr){
    vector<vector<int>> elements;
    int row = arr.size();
    int col = arr[0].size();
    for(int i = 0; i < row ;i++ ){
        for(int j = 0 ; j < col ;j++){
            if(arr[i][j] == 0){
                elements.push_back({i,j});
            }
        }
    }
    return elements;
}
int main(){
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<vector<int>> elements = search(matrix);


    // cout << elements.size()  << endl;

    for(int n = 0 ; n < elements.size() ;n++){
        int ith = elements[n][0]; // rows wala
        int jth = elements[n][1];  // columns wala

        for(int i = 0 ; i < matrix.size() ;i++){
            for(int j = 0 ; j < matrix[0].size() ;j++){
                if(i == ith || j == jth){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    for(int i = 0 ; i < matrix.size() ;i++){
        for(int j = 0 ; j < matrix[0].size() ;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}