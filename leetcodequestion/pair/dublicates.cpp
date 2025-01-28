#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr{1,3,4,2,2};
    for(int i = 0 ; i < arr.size() ;i++){
        for(int j = i+1 ;j <arr.size() ;j++){
            if(arr[i] & arr[j]  == arr[i]){
                cout << arr[i] << " ";
            }
        }
    }
}