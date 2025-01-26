#include<iostream>
using namespace std;
int main(){
    // int arr[10];
    // for(int i = 0 ;i < 9;i++){
    //     cin >> arr[i];
    // }
    // for(int i = 0 ;i < 9;i++){
    //     cout << arr[i];
    // }
    // int arr[] = {1,2,3,4,5,6,7};
    int arr[10];
    for(int i = 0; i < 10 ;i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i]<35){
            cout <<  i << endl;
        }
    }
    return 0;
}