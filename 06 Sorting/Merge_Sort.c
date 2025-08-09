#include <stdio.h>
void merge(int arr[],int low, int mid, int high){
    // i will write code here

}

void mergesort(int arr[],int low, int high){
    if(low >= high) return;
    int mid = (low + high) / 2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



void printarr(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}