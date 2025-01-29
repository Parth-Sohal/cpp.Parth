#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    vector<int> nums{1,2,3,4,5,6,7};
    int start = 0;
    int end = nums.size() - 1;
    int k = 3;
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
    sort(nums.begin(),nums.begin()+k);
    sort(nums.begin()+k,nums.end());
    for(auto i : nums){
        cout << i << " ";
    }
}