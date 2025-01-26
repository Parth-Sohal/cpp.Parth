#include<iostream>
#include<limits.h>
using namespace std;
void minAndSecondMin(int arr[],int n){
    int min = INT_MAX;
    int secondMin = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            secondMin = min;
            min = arr[i];
        }
        else if(arr[i]<secondMin && arr[i]!=min){
            secondMin = arr[i];
        }
    }
    cout << min << " " << secondMin; 
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minAndSecondMin(arr,n);
    return 0;

}