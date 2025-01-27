#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr{1,2,4,2,1,3,6,5,5,6,4};
    // int num;
    // cin >> num;
    // for(int i = 0 ; i < num ; i++){
    //     int n;
    //     cin >> n;
    //     arr.push_back(n);
    // }
    // for(int i = 0 ; i<arr.size() ;i++){
    //     bool  present = true;
    //     for(int j = 0 ; j<arr.size() ;j++){
    //         if(arr[i] == arr[j] && i!=j){
    //             present = false;
    //             break;
    //         }
    //     }
    //     if(present){
    //         cout << arr[i];
    //         break;
    //     }
    // }
    int ans = 0;
    for(int i = 0  ;i<arr.size() ;i++){
        ans = ans^arr[i];
    }
    cout << ans;
    return 0;
}