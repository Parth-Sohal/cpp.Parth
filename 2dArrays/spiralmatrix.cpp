#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    int left = 0;
    int right = arr[0].size();
    int bottom = arr.size();
    int top = 0;
    
    while((left<=right) && (top<=bottom)){

        for(int i = left ; i<=right ; i++){
            cout << arr[top][i] << " ";
        }

        top++;
        cout << endl;

        for(int i = top ; i <= bottom ;i++ ){
            cout << arr[i][right] << " ";
        }

        right--;
        cout << endl;

        for(int i = right ; i >= left ;i--){
            cout << arr[bottom][i] << " ";
        }

        bottom--;
        cout << endl;

        for(int i = bottom ; i >= top ;i--){
            cout << arr[i][left];
        }      

        left++;
        cout << endl;

    }


}