#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,5};
    int brr[] = {3,3,4,8};
    vector<int> v;
    for(int i = 0 ; i < (sizeof(brr)/sizeof(brr[0])) ;i++){
        bool inThere = false;
        for(int j = 0 ; j < (sizeof(arr)/sizeof(arr[0]));j++){
            if(brr[i] == arr[j]){
                arr[j] = -1;
                inThere = true;
                break;
            }
            // continue;
        }
        if(inThere){
            v.push_back(brr[i]);
        }
    }
    for(int num : v){
        cout << num << " ";
    }
}