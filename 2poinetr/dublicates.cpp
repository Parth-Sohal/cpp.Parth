#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // BRUTE FORCE SOL 
    // vector<int> newArr;
    // newArr.push_back(arr[0]);
    // int k = 0 ;
    // for(int i = 1 ; i < arr.size() ;i++){
    //     if(arr[i] != newArr[k]){
    //         newArr.push_back(arr[i]);
    //         k++;
    //     }
    // }
    
    // vector<int> arr = {1,1,2,2,2,3,3,4};
    // int i = 0 ; // unique elemenst ko hold karega
    // int j = 1 ; //tranverse karega array ko
    // int count = 1;
    // while(j<arr.size()){
    //     if(arr[i] != arr[j]){
    //         i++ ;
    //         arr[i] = arr[j];
    //         count++;
    //     }
    //     j++;
    // }
    

    vector<int> arr = {1,0,2,0,3};
    set<int> set ;
    for(int i = 0 ; i < arr.size() ;i++){
        set.insert(arr[i]);
    }
    for(auto i : set){
        cout << i << " ";
    }
    // int i = 0 ;
    // int j = 0 ;
    // while(j<arr.size()){
    //     if(arr[j] != 0){
    //         swap(arr[i],arr[j]);
    //         i++;
    //     }
    //     j++;
    // }
    // for(int i = 0 ; i<arr.size() ;i++){
    //     cout << arr[i] << " ";
    // }

}
