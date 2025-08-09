#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int rev = 0,rem=0;

    while(n){
        rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    printf("Reverse is %d",rev);
    return 0;
}


