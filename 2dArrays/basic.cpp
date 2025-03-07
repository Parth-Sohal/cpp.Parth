#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int arr[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}
    };
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << "\t\t"<<arr[i][j];
        }
        cout << endl;
    }
}