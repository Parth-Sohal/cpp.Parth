#include <iostream>
#include <vector>
using namespace std;
vector<int> newfunc(int n){
    vector<int> result;
    for(int i = 0 ; i<n;i++){
        int num;
        cin >> num;
        result.push_back(num);
    }
    return result;
}
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.pop_back();
    // for(int i = 0 ; i < v.size() ;i++){
    //     cout << v[i];
    // }


    for (int num : v) {
        cout << num*10 << " ";  // Directly accessing each element
    }

    return 0;
}