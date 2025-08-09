#include <stdio.h>
#include <math.h>
int len(int n)
{
    int count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    return count;
}

int summ(int num, int n)
{
    int sum = 0;
    int dig;
    while (num)
    {
        dig = num % 10;
        sum += (int)(pow(dig, n)+0.5);
        num /= 10;
    }
    return sum;
}
int main()
{
    int numm;
    scanf("%d", &numm);
    int n = len(numm);
    int sum = summ(numm, n);
    if (sum == numm)
    {
        printf("Armstrong Number!!");
        return 0;
    }
    printf("Not an Armstrong Number!!");
    return 0;
}