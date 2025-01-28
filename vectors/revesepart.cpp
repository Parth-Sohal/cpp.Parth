#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> 
#include <bits/stdc++.h>
int main()
{
    vector<int> nums{1,2,3,4,5,6,7};
    int k = 3;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k+1,nums.end());
    for(int i : nums){
        cout << i << " ";
    }
}