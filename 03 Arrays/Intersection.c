#include <stdio.h>
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 3, 4, 5, 6};
    // ans  = {1,2,3,4,5,6}
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int res[n1 + n2];
    int i = 0;
    int j = 0;
    int k = 0;
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         if (arr1[i] == arr2[j] && !visited[j])
    //         {
    //             arr3[k++] = arr1[i];
    //             visited[j] = 1; // mark as used
    //             break;          // break to avoid multiple counts of same arr1[i]
    //         }
    //     }
    // }
    // printarr(arr3, k);
    while (i<n1 && j<n2){
        if (arr1[i] == arr2[j]){
            if (k == 0 || res[k-1] != arr1[i]){

                res[k++] = arr1[i];
                res[k++] = arr1[i];
                i++;
                j++; 
            }  // skip duplicate insertion
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    printarr(res, k);
    return 0;
    
}

// This is Brute force , needs to be optimized