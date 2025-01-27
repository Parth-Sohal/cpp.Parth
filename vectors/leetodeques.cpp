#include <iostream>
#include <vector>
using namespace std;
vector<double> convertTemperature(double celsius)
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v[3] = 6;
    for(int i = 0 ; i < 4;i++){
        cout << v[i] << " ";
    }
}
int main(){
    double celcius = 36.50;
    convertTemperature(celcius);
    return 0;
}