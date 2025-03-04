#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {12, 3, 6, 9, 34, 2, 5, 8};
    sort(arr.begin() ,arr.end());
    int target = 20;
    for(int i = 0 ; i < arr.size() ;i++){
        int s = i+1;
        int e = arr.size()-1;
        if(arr[i]<target){
            while(s<e){
                if(arr[i] + arr[s] + arr[e] == target) {
                    cout << arr[i] << " " << arr[s] << " " << arr[e] << " " <<endl;
                    s++;
                    e--;
                }
                else if(arr[i] + arr[s] + arr[e] < target){
                    s++;
                }
                else{
                    e--;
                }
            }
        }
    }
}
