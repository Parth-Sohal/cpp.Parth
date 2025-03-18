#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// int main(){
//     vector<int> nums = {3,1,3,4,2};

//     int i = 0;
    
//     while(i<nums.size()){
//         if((nums[i]>0 && nums[i]<nums.size()) && (nums[i]!=nums[nums[i]])){
//             swap(nums[i],nums[nums[i]]);
//         }
//         else{
//             i++;
//         }
        
//     }
    

// }

#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {6,5,8,7,1,4,1,3,2};

    // phele cyclic sort try karte hai kyuki 1 - n taak elements hai aur ek missing plus ek repeat tooh 1 to n ke bech me ek jo missing // //hai vohi  uski jagah koi repeat ho raha hoga

    int i = 0 ;
    while(i<arr.size()){
        if(arr[i] != arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
        else{
            i++;
        }
        // for(auto n : arr){
        //     cout << n << " ";
        // }
        // cout << endl;
    }
    
    for(int i = 0 ; i < arr.size() ;i++){
        if(arr[i] != i+1){
            cout << arr[i] << " " << i+1;
        }
    }

}