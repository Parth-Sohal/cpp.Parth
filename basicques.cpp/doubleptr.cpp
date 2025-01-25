#include<iostream>
using namespace std;
int main(){
    int pihu = 5;
    int *ptr = &pihu;
    int **doublePtr = &ptr;
    cout << pihu << endl;
    cout << &pihu << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << doublePtr <<endl;
    cout << **doublePtr << endl;
    cout << &doublePtr <<endl;
    cout << *doublePtr <<endl;
    return 0;
}
