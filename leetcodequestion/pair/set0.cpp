#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> nums{0,1,0};
    for(int i = 0 ; i < nums.size() ;i++){
        if(nums[i]==0){
            int start = i;
            for(int j = i+1 ; j<nums.size(); j++){
                int temp = nums[start];
                nums[start] = nums[j];
                nums[j] = temp;
                start++;
            }
        }
    }
    for(auto num: nums){
        cout << num << " ";
    }
}