#include <stdio.h>

int main(){
    int arr[] = {1,2,4,5};
    int n = 5;
    // find the missing number in the array, in this case output = 3
    int flag = 0;
    for (int i = 0;i<=n;i++){
        for (int j = 0;j<n-1;j++){
            if (i == arr[j]){
                flag = 0;
            }
            else{
                flag = 1;
                return;
            }
        }
    }
    return 0;
}