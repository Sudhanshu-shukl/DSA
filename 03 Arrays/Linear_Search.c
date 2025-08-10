#include <stdio.h>
int main(){
    int arr[] = {7, 0, 3, 0, 5, 9, 0, 2, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter the Value you want to search : ");
    scanf("%d",&target);
    for (int i=0;i<n;i++){
        if (arr[i] == target){
            printf("Found at index %d",i);
            return 0;
        }
    }
        printf("Not Found");
        return 0;
}