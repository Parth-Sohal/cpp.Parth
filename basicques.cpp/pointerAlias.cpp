#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    // int a  = 5 , b =10;
    // swap(a,b);
    // cout << a << "  " << b;


    // int num = 5;
    // int &num_2 = num;
    // num_2=+ 10;
    // cout << num <<endl <<num_2 <<endl;
    // cout << &num <<endl;
    // cout << &num_2;

    int x;
    int* ptr = &x;
    cin >> *ptr;
    *ptr=*ptr+10;
    ptr++;
    cout << &x << endl;
    cout << ptr <<endl << *ptr <<endl;
    cout <<x;
}