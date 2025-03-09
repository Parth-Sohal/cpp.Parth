#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int  main(){
    int arr[2][3] = {{1,2,3},
                    {4,5,6}};

    int brr[3][2] = {{1,4},
                    {2,5},
                    {3,6}};

    int result[2][2] = {0,0,0,0};

    for(int i = 0 ; i < 2 ;i++){
        for(int j = 0 ; j < 2 ;j++){
            for(int k = 0  ; k < 3 ;k++){
                result[i][j] += (arr[i][k] * brr[k][j]);
            }
        }
    }

    for(int i = 0 ; i < 2 ;i++)
    {
        for(int j = 0 ; j < 2 ;j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}