#include<iostream>
using namespace std;
int main(){
    // int arr[] = {1,2,3};
    // int* ptr = arr;
    // // std::cout << ptr++ << endl;
    // // std::cout << ptr++ << endl;
    // // std::cout << ptr++ << endl;
    // for(int i= 0;i<3;i++){
    //     cout << ptr[i] << endl;
    // }
    // int arr[] = {1,2,3,4,5,6,7};
    // int* ptr = arr;
    // ptr += (sizeof(arr[0])*2);
    // *ptr = 36;
    // // cout << ptr <<endl;
    // // cout << arr[2];
    // for(int i = 0;i<7;i++){
    //     cout << arr[i] << endl;
    // }
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int* ptr = arr;
    ptr += (sizeof(arr[0]) * 2)/4; // Move ptr to arr[2]
    *ptr = 36; // Modify arr[2]
    
    // Print the entire array to confirm the change
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    cout << "arr[2] is: " << arr[2] << endl; // Should print 36
    return 0;
}