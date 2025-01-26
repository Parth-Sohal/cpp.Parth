#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    // int max = INT_MIN;
    // for(int i = 0 ; i < n ;i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // cout << "The maximum is -> "<< max;
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0 ; i < n ;i++){
        if(arr[i] >  max){
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max){
            secondMax = arr[i];
        }
    }
    cout << "The maximum is -> " << max << endl << "The second max is -> "<<secondMax;
    return 0;
}