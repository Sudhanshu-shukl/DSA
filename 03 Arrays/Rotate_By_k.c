#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[],int front, int end) {
    while (front < end) {
        swap(&arr[front], &arr[end]);
        front++;
        end--;
    }
}

void printarr(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7; // sizeof(arr)/sizeof(arr[0])
    int k = 3;
    int left = n-k;
    reverse(arr,0,left-1);
    reverse(arr,left,n-1);
    reverse(arr,0,n-1);
    printarr(arr,n);
    return 0;
}