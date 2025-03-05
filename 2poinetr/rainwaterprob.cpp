#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
int min(int a,int b){
    if(a>b) return b;
    return a;
}
using namespace std;
// 0,1,0,2,1,0,1,3,2,1,2,1
// 4,2,0,3,2,5
int main()
{
    vector<int> nums = {4,2,0,3,2,5};
    int total = 0;
    int i = 0 ;
    while(i<nums.size()){

        cout << " current value of i = " << i <<endl ;
        int element = nums[i];
        int sum = 0;
        int max = -1;
        for(int j = i+1 ; j<nums.size() ;j++){
            if(nums[j] >= element){
                max = j;
                break;
            }
        }
        
        
        cout << " current value of max = " << max <<endl;

        for(int k = i+1 ; k<=max-1 ; k++){
            cout << " min of i and max = "<< min(nums[i],nums[max]) << " value of k = "  << nums[k] << endl;

            sum+=min(nums[i],nums[max])-nums[k];
        }
        cout << " current value of sum = " << sum <<endl ;

        i = max;
        total+=sum;
        cout << endl;

    }
    cout << total;
}  