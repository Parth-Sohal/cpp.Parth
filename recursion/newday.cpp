#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int result =  n*n*n + sum(n-1);
//     return result;
// }

int main()
{
    vector<int> nums = {1,2,3};

    vector<int> arr(nums.size() + 1);
    for (int i = 0; i < arr.size(); i++)
    {
        if ((nums[i] > 0) && (nums[i] < arr.size()))
        {
            arr[nums[i]] = nums[i];
        }
    }
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
    int res;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i] == 0){
            cout << i ;
            break;
        }
    }
    
    
    
}