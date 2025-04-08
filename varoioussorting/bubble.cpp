#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {9};
    int n = arr.size();

    if(arr[n-1]!=9){
        arr[n-1] +=1;
        for(auto i : arr){
            cout << i << " ";
        }
    }

    else{
        int i = n - 1;
        while(i > 0 && arr[i]==9){
            arr[i--] = 0;
        }
        for(auto i : arr){
            cout << i << " ";
        }
        cout << endl;
        cout << i << endl;
        
        // arr[i] = arr[i] + 1;
        if(arr[i]==9){
            arr[i] = 1;
            arr.push_back(0);
            for(auto i : arr){
                cout << i << " ";
            }
        }
        else{
            arr[i] += 1;
            for(auto i : arr){
                cout << i << " ";
            }

        }
    }
}