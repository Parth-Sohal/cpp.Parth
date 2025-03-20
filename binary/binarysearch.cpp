#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int BinarySearch(int arr[] , int n , int target)
{
    int low = 0 ;
    int high = n - 1 ;
    int ans = -1;

    while(low<= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            ans = mid;
            high  = mid - 1;
        }

        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {3,5,8,15,15,19};
    int target;

    cout << "Enter target Value = " ;
    cin >> target ; 

    // int result = BinarySearch(arr , n , target);

    int result = binary_search(arr.begin() , arr.end() , target);

    cout << "Answer = " << result; 
    return 0;
}