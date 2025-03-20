#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,4,4,4,4,4,5,6,7};

    int start = 0 ; 
    int end  = arr.size()-1;
    int target = 4;;
    int ans = -1;


    // while(start <= end){
    //     int mid = start + (end - start)/2 ;

    //     if(arr[mid] == target){

    //         cout << "current here mid =  " << mid << endl;
    //         if(mid == 0 || arr[mid] > arr[mid-1]){
    //             ans = mid;
    //             cout << "ye lo" << " ";
    //             break;
    //         }
    //         else{
    //             end = mid - 1;
    //         }
    //     }
    //     else if(arr[mid] < target){
    //         start = mid+1;
    //     }
    //     else{
    //         end = mid - 1;
    //     }
    // }

}