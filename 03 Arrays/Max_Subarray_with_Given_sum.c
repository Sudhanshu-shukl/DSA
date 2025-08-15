#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = 3;
    int k = 3;
    int subsets = 1 << n;
    int res[subsets][n];
    int res_sizes[subsets];

    for (int i = 0; i < subsets; i++)
    {
        int idx = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                res[i][idx++] = arr[j];
            }
        }
        res_sizes[i] = idx;
    }

    return 0;
}
