#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> height = {4,2,3};
    int total = 0 ;
    int i = 0 ;
    while(i < height.size()){
        cout << "Current Value of i = " << i << endl;
        int max = i;
        int sum = 0;
        for(int j = i+1 ; j < height.size() ; j++){
            if(height[j] >= height[i]){
                max = j;
                break;
            }
        }
        if(i == max){
            int ans = -1;
            for(int j = i+1 ; j<height.size() ;j++){
                if(ans == -1 || height[j] > height[ans]){
                    ans = j;
                }
            }
            max = ans;
        }
        if(max == -1){
            i++;
        }
        else{
            for(int k = i+1 ; k <max ;k++){
                sum += min(height[i],height[max]) - height[k];
            }
            cout << "sum =    " << sum << endl;
        }
        total+=sum;
        cout << max << " " << "\n\n";
        i = max;
    }
    cout << total;
}