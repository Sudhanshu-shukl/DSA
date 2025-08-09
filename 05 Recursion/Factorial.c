#include <stdio.h>
int func(int n){
    if (n == 1){
        return 1;
    }
    return n * func(n-1);
    
}
int main(){
    int n = 5;
    int n1 = func(n);
    printf("%d",n1);
    return 0;
}