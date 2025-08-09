#include <stdio.h>
#include <limits.h>

int Sorted_Desc(int arr[],int n){
    int flag = 0;
    for (int i=1;i<n;i++){
        if (arr[i-1] < arr[i])
        {
            flag = 1;
            return flag;
        }
    }
    return 0;

}

int Sorted_Asec(int arr[],int n){
    int flag = 0;
    for (int i=1;i<n;i++){
        if (arr[i-1] > arr[i])
        {
            flag = 1;
            return flag;
        }
    }
    return 0;

}
int main()
{
    int arr[] = {5,6,3,2,1};         // Expected Output: No or False
    int n = sizeof(arr) / sizeof(int);
    int flag = 0;
    if (!n)
    {
        printf("Array is Empty");
        return 0;
    }
    if (!Sorted_Asec(arr,n)){
        printf("Sorted in Ascending order");
    }
    else if (!Sorted_Desc(arr,n)){
        printf("Sorted in Descending order");
    }
    else{
        printf("Unsorted");
    }
    return 0;
}