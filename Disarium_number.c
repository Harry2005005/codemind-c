#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n,b=0;
    while(a!=0)
    {
        a=a/10;
        b++;
    }
    a=n;
    int sum=0;
    while(a!=0)
    {
        int rem=a%10;
        sum=sum+pow(rem,b);
        a=a/10;
        b--;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}