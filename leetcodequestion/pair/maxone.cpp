#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1};
    int count = 0;
    // int max = 0;
    // int count = 0;
    // for(int i = 0 ; i < v.size() ;i++){
    //     if(v[i] == 1){
    //         count = 1;
    //         // int j = i+1;
    //         for(int j = i+1 ; j <v.size() ;j++){
    //             if(v[j] == 1){
    //                 count++;
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //     }
    //     if(count > max ){
    //         max = count;
    //     }
    // }
    // cout << max;
    int i = 0;
    int max = 0;
    while(i<v.size()){
        if(v[i] == 1){
            count++;
            if(count > max){
                max = count;
            }
            i++;
        }
        else{
            count = 0;
            i++;
        }
    }
    cout << max;
    return 0;
}