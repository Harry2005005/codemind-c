#include<stdio.h>

int prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

void find_prime(int n)
{
    for (int i = 2; i < n; i++) 
    {
        if (n % i == 0 && prime(i) && prime(n / i))
        {
            printf("%d %d
", i, n / i);
            return;
        }
    }
    printf("-1");
}

int main() 
{
    int n;
    scanf("%d", &n);
    find_prime(n);

    return 0;
}