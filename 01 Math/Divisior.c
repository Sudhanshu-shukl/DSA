#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num <= 0){
        printf("Enter a Positive Integer");
        return 0;
    }
    for (int i = 1;i<=num/2;i++){
        if (num % i == 0){
            printf("%d ",i);
        }
        printf("%d",num);
    }
    return 0;
    
}