#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr{1, 0, 1, 0, 0, 1, 1, 0, 1, 0};
    int start = 0;
    int end = arr.size() - 1;
    while(start<end){
        if(arr[start] == 1 && arr[end] == 0){
            int temp  = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        // else if(arr[start] == 0 && arr[end] == 1){
        //     start++;
        //     end--;
        // }
        else if(arr[end] == 1){
            end--;
        }
        else if(arr[start] == 0){
            start++;
        }
    }
    for(auto num: arr){
        cout << num << " ";
    }
}