#include<stdio.h>
#include<limits.h>
int abs(int num){
    if(num < 0) num = -(num);
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    

    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0 ;i < n ;i++){
        if(abs(arr[i]) > (max)){
            secondMax = max;
            max = arr[i];
        }else if(abs(arr[i]) > abs(secondMax) ){
            secondMax = arr[i];
        }
    } 
    printf("%d",max*secondMax);
    return 0;
}