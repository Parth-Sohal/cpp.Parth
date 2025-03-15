#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n ;
    cin >> n;

    // n = n+1;

    vector<int> arr(n+1,0);

    
    int a = (n/2);
    int crn = 1;
    for(int i = 0 ; i <= a ;i++){
        arr[i] = crn;
        arr[n-i] = crn;
        crn = crn*(n-i)/(i+1);
    }

    for(auto i : arr)
    {
        cout << i << " ";
    }

}