#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void change(vector<vector<int>> &arr ,int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main()
{
    vector<vector<int>> mat = {{0, 0, 0},
                                {0,1,0},
                               {1,1,1}};

    vector<vector<int>> target = {{1, 1,1},
                                  {0,1,0},
                                {0,0,0}};

    int n = mat.size();
    bool val = false;
    for(int i = 0 ; i < 4 ;i++){
        change(mat,n);
        if(mat == target){
            val = true;
            break;
        } 
    }

    if(val){
        cout << 1;
    }
    else{
        cout << 0;
    }
}