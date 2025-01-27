#include<iostream>
#include<vector>
using  namespace std;
int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(12);
    arr.push_back(15);
    arr.push_back(18);
    arr.push_back(21);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
}