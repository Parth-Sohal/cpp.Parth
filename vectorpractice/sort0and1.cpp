#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> arr{0,1,0,3,12};

    int i = 0 ; // storer non - zeros
    int j = 1; //  transverse 

    while(j<arr.size()){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }

    for(auto i : arr){
        cout << arr[i] << " ";
    }
    // int start = 0;
    // int end = arr.size() - 1;
    // while(start<end){
    //     if(arr[start] == 1 && arr[end] == 0){
    //         int temp  = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;
    //         start++;
    //         end--;
    //     }
    //     // else if(arr[start] == 0 && arr[end] == 1){
    //     //     start++;
    //     //     end--;
    //     // }
    //     else if(arr[end] == 1){
    //         end--;
    //     }
    //     else if(arr[start] == 0){
    //         start++;
    //     }
    // }
    // for(auto num: arr){
    //     cout << num << " ";
    // }
}