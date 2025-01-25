#include<iostream>
using namespace std;


void swap(int* num1 , int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(){
    // int num1,num2;
    // cin >> num1 >> num2;
    // swap(&num1,&num2);
    // cout << "The number 1 is = " << num1 << endl;
    // cout << "The number 2 is = " << num2;
    int x,y;
    int* ptr1 = &x;
    int* ptr2 = &y;
    cin >> *ptr1 ;
    cin >> *ptr2 ;
    int* ptr3 = nullptr;
    cout <<  *ptr1 + *ptr2 <<endl;
    cout << *ptr3;
    return 0;
}