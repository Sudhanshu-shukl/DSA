#include <stdio.h>

int main(){
    int n ;
    printf("Enter the Value : ");
    scanf("%d",&n);
    int count = 0;
    while (n){
        n /=10;
        count++;
    }
    printf("There are %d digits",count);
    return 0;
}