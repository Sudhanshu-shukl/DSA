#include <stdio.h>
void replace(int *a,int *b){
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
    for (int j = 0;j<n;j++){
        int min = j;
        for (int i = j;i<n;i++) // 0 1 2 3 4
        {
            if (arr[i] < arr[min]){
                min = i;
            }
        }
        replace(&arr[min],&arr[j]);
    }
    printarr(arr,n);
    return 0;
}