#include <stdio.h>
int Remove_duplicate(int arr[],int n){
    int j = 1;
    int i = 0;

    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            arr[i] = arr[j];
            j++;
        }
    }
    return i+1;


}

int main()
{
    int arr[] = {1,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n==0){
        printf("Array is Empty"); // Can return -1 when working with leetcode or shit
        return 0;
    }
    int count = Remove_duplicate(arr,n);
    for(int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d Unique Elements Found!",count);
    return 0;
}