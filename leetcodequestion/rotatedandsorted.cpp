#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

int main()
{
    vector<int> arr{2, 1, 3, 4};
    vector<int> sortt = arr;
    cout << sortt.size() << endl;
    sort(sortt.begin(), sortt.end());
    // for(int i : arr){
    //     cout << i << " ";
    // }
    // cout << endl;
    // for(int i : sortt){
    //     cout << i << " ";
    // }
    bool value = false;
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> heap = sortt;
        reverse(heap.begin(), heap.end());
        reverse(heap.begin(), heap.begin() + i);
        reverse(heap.begin() + i, heap.end());
        for (int i : heap)
        {
            cout << i << " ";
        }
        if (heap == arr)
        {
            value = true;
        }
        cout << endl;
    }
    cout << value;
    return 0;
}