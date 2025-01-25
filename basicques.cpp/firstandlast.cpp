#include <iostream>
using namespace std;
#include<cmath>
void fandl(int num){
    cout << num%10;
    // int reverse = 0;
    while(num>=10){
        // reverse = reverse*10 + num%10;
        num = num / 10;
    }
    cout << " " <<num%10;
}
int main(){
    int num;
    cin >> num;
    // fandl(num);
    int first = num / pow(10,floor(log10(num)));
    cout << first << " " << num%10;
    return 0;
}