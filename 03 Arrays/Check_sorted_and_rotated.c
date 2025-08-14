#include <stdio.h>
int main(){
    int arr[] = {6,3,4,5}; // rotate by 2 -> True
    int c = 0;
    int n = sizeof(arr)/sizeof(arr[0]); // 4
    for (int i=0;i<n;i++){
        if (arr[i] > arr[(i+1)%n]){
            c++;
        }
    }
    if (c<=1) printf("Sorted and Rotated!");
    else printf("Not Sorted / Rotated!");
    return 0;
}