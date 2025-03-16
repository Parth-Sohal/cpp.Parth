#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// {0,0,1,1},
//         {1,0,1,0},
//         {1,1,0,0}

int main(){
    vector<vector<int>> grid = {
        {1}
    };

    int row = grid.size();
    int col = grid[0].size();


    for(int i = 0  ; i < grid.size() ;i++){
        if(grid[i][0] == 0){
            for(int j = 0 ; j < grid[i].size() ;j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
                }
                else{
                    grid[i][j] = 1;
                }
            }
        }
    }
    
    for(int j = 1 ; j < col ;j++){
        int noZero = 0 ; 
        int noOne = 0;
        for(int i = 0 ; i < row ;i++){
            if(grid[i][j] == 0){
                noZero++;
            }
            else{
                noOne++;
            }
            // cout << arr[i][j] << " ";
        }
        cout << noZero << " " << noOne << endl;
        if(noZero>noOne){
            for(int i = 0 ; i < row ;i++){
                if(grid[i][j] == 0){
                    grid[i][j] = 1;
                }
                else{
                    grid[i][j]=0;  
                }
                // cout << arr[i][j] << " ";
            }
        }
    }
    int total = 0;
    for(int i = 0  ; i < grid.size() ;i++){
        int count = 0;
        int prod = 1;
        for(int j = col-1 ; j>=0 ;j--){
            if(grid[i][j] == 1){
                count += prod;
            }
            prod = prod*2;
        }
        total += count;
        // cout << count << endl;
    }

    return total;

}