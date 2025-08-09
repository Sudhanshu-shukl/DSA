// #include <stdio.h>
// void func(int i , int sum){
//     if (i<1){
//         printf("%d",sum);
//         return;
//     }
//     func(i-1,sum+i);
// }
// int main(){
//     int n = 10;
//     func(n , 0);
//     return 0;
// }

#include <stdio.h>
int func(int n){
    if (n == 0){
        return 0;
    }
    return n + func(n-1);
}
int main(){
    int n = 10;
    func(n);
    return 0;
}