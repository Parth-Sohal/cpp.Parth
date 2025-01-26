#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n , int k){
    bool flag = false;
    for(int i = 0 ; i < n;i++){
        if(arr[i] == k){
            flag = true;
            break ;
        }
    }
    return flag;
}
int main(){
    int n ; 
    cin >> n;
    int arr[n];
    int k ;
    cin >> k;
    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }
    // int k ;
    // cin >> k;
    cout << linearsearch(arr,n,k);
    return 0;
}