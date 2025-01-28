#include<iostream>
#include<limits.h>
using namespace std;
#include<vector>
int main(){
    vector<int> prices{7,1,5,3,6,4};
    // int maxProfit = 0;
    // for(int i = 0;i<prices.size() ;i++){
    //     for(int j = i+1 ;j<prices.size() ;j++){
    //         if(prices[j]>prices[i] && (prices[j] - prices[i] > maxProfit)){
    //             maxProfit = prices[j] - prices[i];
    //         }
    //     }
    // }

    // int start = 0; 
    // int end = prices.size() - 1;
    // while(start < end){
    //     if(prices[start] > prices[end]){
    //         start++;
    //     }
    //     else if(prices[start]<prices[end]){
    //         if(prices[end] - prices[start] > maxProfit){
    //             maxProfit = prices[end] - prices[start];
    //         }
    //         end--;
    //     }
    // }

    int max = 0;
    int min = INT_MAX;
    for(int i = 0 ; i <  prices.size() ;i++){
        if(prices[i]<min){
            min = prices[i];
        }
        if(prices[i]-min > max){
            max = prices[i] - min;
        }
    }
    return  max;
}