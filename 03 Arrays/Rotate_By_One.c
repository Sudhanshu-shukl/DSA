#include <stdio.h>

void printarr(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5; // sizeof(arr)/sizeof(arr[0])
    int last = arr[n-1];
    for (int i = n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    printarr(arr,n);
}