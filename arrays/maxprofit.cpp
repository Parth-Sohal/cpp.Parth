#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[7] = {7,2,3,4,5,6,1};
    int min = arr[0];
    int index = 0;
    for(int i=0;i<7;i++){
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    cout << min <<endl;
    int max = arr[index];
    for(int i = index;i<7;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    if(max == min){
        cout << 0;
    }
    else{
        cout << max - min;
    }
    return 0;
}