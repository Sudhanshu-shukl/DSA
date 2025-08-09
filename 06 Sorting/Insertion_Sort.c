#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarr(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        int j = i;
        while (j!=0 && arr[j-1]>arr[j]){
            swap(&arr[j-1],&arr[j]);
            j--;
        }
    }
    printarr(arr,n);
    return 0;
}