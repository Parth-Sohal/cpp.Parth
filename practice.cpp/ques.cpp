//phele easy se start katrte hai fiir confindence bante hai aur chalte hai more tough ques
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

// rotated

// int main(){
//     vector<int> arr = {3,4,5,1,2};
        
//     // for(int i = 0 ; i < arr.size() ;i++){
//     //     vector<int> arr2 = arr;
//     //     int k = i ;
//     //     reverse(arr2.begin(),arr2.end());
//     //     reverse(arr2.begin(),arr2.begin()+k);
//     //     reverse(arr2.begin()+k,arr2.end());
//     //     for(auto i : arr2){
//     //         cout << i << " ";
//     //     }
//     //     if(is_sorted(arr2.begin(),arr2.end())){
//     //         cout << "true" ;
//     //     }
//     //     cout << endl;
//     // }

//     // for(auto i : arr){
//     //     cout << i << " ";
//     // }
//     // cout << endl;

//     // if(is_sorted(arr.begin(),arr.end())){
//     //     cout << true;
//     // }
//     // else{
//     //     cout << false;
//     // }

//     int min = INT_MAX;
//     int index = -1;
//     for(int i = 0 ; i < arr.size() ;i++){
//         if(arr[i]<min){
//             min = arr[i];
//             index = i;
//         }
//     }
    
//     cout << index ;
//     bool flag = true;
//     for(int i = 0 ; i < arr.size() ;i++){
//         if(i < index-1){
//             if(arr[i]>arr[i+1]){
//                 flag = false;
//             }
//         }   
//         else{
//             if(arr[i] < min){

//             }
//         }
//     }


// }


bool isSorted(int arr[], int n) {
    
    int count = 0;
    for(int i = 0 ; i < n-1 ;i++){
        if(arr[i] < arr[i+1]){
            continue; 
        }
        else{
            count++;
        }
    }
    cout << count ;
}

int main() {

  int arr[] = {3,4,5,1,2}, n = 5;
  bool ans = isSorted(arr, n);
//   if (ans) cout << "True" << endl;
//   else cout << "False" << endl;
  return 0;
}

