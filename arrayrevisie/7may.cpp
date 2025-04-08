#include<iostream>
using namespace std;
#include<cmath>
#include<limits.h>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
int main()
{
    vector<int> arr = {3,2,1};

    // cyclic sort

    int i = 0;

    while(i < arr.size()){
        int index = arr[i];
        if(index <= 0 || index > arr.size()){
            i++;
        }
        else if(arr[i] == arr[index -1]){
            i++;
        }
        else{
            swap(arr[i],arr[index-1]);
        }
        for(auto j : arr){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
} 