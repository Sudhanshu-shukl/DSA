#include <stdio.h>
void merge(int arr[],int low, int mid, int high){
    int n1  = mid-low+1;
    int n2 = high-mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];

    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < n1)
        arr[k++] = left[i++];

    while (j < n2)
        arr[k++] = right[j++];
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