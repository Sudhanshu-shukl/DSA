#include <stdio.h>
#include <limits.h>
int main()
{
    // int arr[] = {1, 5, 9, 3, 7};         // Expected Output: 9
    // int arr[] = {-5, -2, -999, -1, -42}; // Expected Output: -1
    // int arr[] = {7, 7, 7, 7, 7};         // Expected Output: 7
    // int arr[] = {42};                    // Expected Output: 42
    // int arr[] = {1, 100, 2, 99, 3, 98};  // Expected Output: 100
    // int arr[] = {5, 3, 2, 69};           // Expected Output: 69
    // int arr[] = {99, 2, 3, 4};           // Expected Output: 99
    // int arr[] = {-1000000000, -999999999, -2147483648};  // Expected: -999999999 (INT_MIN check!)
    // int arr[] = {INT_MIN, INT_MAX};         // Expected: INT_MAX (boundary test)
    // int arr[] = {0};                        // Expected: 0 (single zero element)
    // int arr[] = {-1, -1, -1};               // Expected: -1 (all negatives same)
    int arr[] = {INT_MAX, INT_MAX, INT_MAX};// Expected: INT_MAX (max int duplicates)
    // int arr[] = {4, 324, 3421, 22, 34};
    int n = sizeof(arr) / sizeof(int);
    if (!n)
    {
        printf("Array is Empty");
        return 0;
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN){
        printf("No Second Largest");
        return 0;
    }
    printf("Second largest element is : %d", max2);
    return 0;
}