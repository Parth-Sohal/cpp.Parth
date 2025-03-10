#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2};

    int i = 0;
    int n = nums.size();
    while (i < nums.size())
    {
        if (nums[i] < 0 || nums[i] >= n || nums[i] == i)
        {
            i++;
        }
        else if (nums[i] != nums[nums[i]])
        {
            // cout << "swapped value = " << nums[nums[i]] << endl;
            swap(nums[i], nums[nums[i]]);
        }
        else
        {
            i++;
        }
    }

    
    for(auto i : nums){
        cout << i << " ";
    }

    return 0;
}