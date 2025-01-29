#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>

int main(){
    vector<int> arr{10,10,3,7,6};
    int count = 0;
    cout << arr.size() << endl;
    for(int i = 0 ; i<arr.size()-1;i++){
        int sum1 = 0 ;
        int sum2 = 0 ;
        for(int j = 0 ; j <= i ;j++){
            sum1= sum1 + arr[j];
        }
        // cout << sum1 << endl;
        for(int k = i+1;k<arr.size();k++){
            sum2 = sum2 + arr[k];
        }
        // cout << sum2 << endl;
        int diff = sum1 - sum2;
        if(diff % 2 == 0){
            // cout << "in" << " ";
            count++;
        }

        cout << diff << endl;
    }
    cout << count;
}