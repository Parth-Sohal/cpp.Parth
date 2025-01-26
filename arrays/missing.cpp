#include<iostream>
using namespace std;
/*WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.*/

int main(){
    int arr[] = {1,2,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 1;i<=n+1;i++){
    //     bool flag = false;
    //     for(int j = 0; j<n;j++){
    //         if(i == arr[j]){
    //             flag = true;
    //             continue;
    //         }
    //     }
    //     if(!flag){
    //         cout << i << " is the missing element";
    //         break;
    //     }
    // }
    // best approach ----------->
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = ((n+1)*(n+2))/2;
    int arrSum = 0;
    for(int i =0 ;i<n;i++){
        arrSum+=arr[i];
    }
    cout << (sum - arrSum);
    return 0;
}