#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1, j = high;
    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot)
        {
            i++;
        }
        while (j >= low && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partion_index = partion(arr, low, high);
        quick_sort(arr, low, partion_index - 1);
        quick_sort(arr, partion_index + 1, high);
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    quick_sort(arr, 0, n - 1);
    printarr(arr, n);
    return 0;
}