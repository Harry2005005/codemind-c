#include<stdio.h>
int main()
{
    int n,rev=0,x,rem;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
}