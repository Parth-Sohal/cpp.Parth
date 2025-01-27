#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> arr{1,2,4,6,8,10};
    vector<int> brr{3,4,5,6};
    vector<int> v;
    for(int i = 0 ; i <  arr.size() ;i++){
        int element = arr[i] ;
        for(int j = 0 ; j < brr.size() ;j++){
            if(element == brr[j]){
                brr[j] = INT_MIN;
                break;
            }
        }
    }
    v = arr;
    for(int i = 0 ; i < brr.size() ;i++){
        if(brr[i] != INT_MIN){
            v.push_back(brr[i]);
        }
    }
    for(auto num : v){
        cout << num << " ";
    }
}