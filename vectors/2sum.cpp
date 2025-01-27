#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v{2,7,11,15};
    int target = 9;
    vector <int> sum;
    for(int i = 0 ; i < v.size() ;i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i] + v[j] == target){
                sum.push_back(v[i]);
                sum.push_back(v[j]);
                break;
            }
        }
        if(!sum.empty());
    }
    cout << sum[0] << " " << sum[1];
}