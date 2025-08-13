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
    int arr2[] = {3, 4, 5, 6};
    int n1 = 4;
    int n2 = 4;
    int res[n1 + n2];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        // FIX: Don't check 'k == 0 || arr1[i] < arr2[j]' here
        // Instead compare arr1[i] and arr2[j] directly for ordering
        if (arr1[i] < arr2[j])
        {
            // FIX: Use res[k-1] to check last inserted, not res[k] which is uninitialized
            if (k == 0 || res[k - 1] != arr1[i])
            {
                res[k] = arr1[i];
                k++;
            }
            i++;
        }
        else
        {
            // FIX: You need to handle arr2[j] < arr1[i] case separately
            // Right now equal and arr2[j]<arr1[i] are merged here which breaks logic
            if (k == 0 || res[k - 1] != arr2[j])
            {
                res[k] = arr2[j];
                k++;
            }
            j++;
        }
    }

    if (i < n1)
    {
        while (i < n1)
        {
            // FIX: When duplicate found, you forgot to increment i inside else
            // This causes infinite loop
            if (k == 0 || res[k - 1] != arr1[i])
            {
                res[k] = arr1[i];
                k++;
                i++; // increment here
            }
            else
            {
                i++; // add this increment to avoid stuck loop
            }
        }
    }
    else
    {
        while (j < n2)
        {
            // Same fix here: increment j in else to avoid infinite loop
            if (k == 0 || res[k - 1] != arr2[j])
            {
                res[k] = arr2[j];
                k++;
                j++; // increment here
            }
            else
            {
                j++; // add this increment too
            }
        }
    }
    printarr(res, k);
    return 0;
}
