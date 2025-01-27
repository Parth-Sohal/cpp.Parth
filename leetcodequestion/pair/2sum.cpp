#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> arr{2,7,11,15};
    vector<int> target;
    int sum = 9;
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ;j < arr.size() ;j++){
            if(arr[i] + arr[j] == sum){
                target.push_back(arr[i]);
                target.push_back(arr[j]);
                break;
            }
        }
    }
    for(auto n:target){
        cout << n << " ";
    }
}