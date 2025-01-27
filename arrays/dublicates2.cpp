#include<iostream>
using namespace std;
bool dub(int arr[],int n){
        for(int i = 0 ; i<n;i++){
            for(int j = i+1 ;j <n;j++){
                if(arr[i]==arr[j]){
                    return false;
                }
            }
        }
        return true;

}
int main(){
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << dub(arr,size);
}