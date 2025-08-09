#include <stdio.h>
long long int reverse(long long int n){
    long long int rev = 0, rem = 0;
    while (n){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int rev = reverse(n);
    if (rev == n){
        printf("Palindrome");
        return 0;
    }
    printf("Not Palindrome");
    return 0;
}