#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {4,5,6};
    vector<int> result = v1;
    result.insert(result.end() ,v2.begin() ,v2.end());
    // for(int i = 0 ; i < v1.size()+v2.size() ;i++){
    //     if(i<v1.size()){
    //         result.push_back(v1[i]);
    //     }
    //     else{
    //         result.push_back(v2[i-v1.size()]);
    //     }
    // }
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }


}