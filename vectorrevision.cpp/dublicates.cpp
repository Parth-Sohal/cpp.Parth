#include <iostream>
#include <vector>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    std::vector<int> arr;
    int n;
    std::cout << "enter the number of elements in a vector => ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        std::cout << "Enter the " << i + 1 << "th element ";
        std::cin >> element;
        arr.push_back(element);
    }

    sort(arr.begin(),arr.end());

    int i = 0; 
    

}