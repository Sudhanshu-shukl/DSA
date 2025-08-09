#include <stdio.h>
void swap(int *a, int *b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
int reverse(int arr[],int l,int r){
    if (l>=r){
        return 0;
    }
    swap(&arr[l],&arr[r]);
    return reverse(arr,l+1,r-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,0,n-1);
    for (int  i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}