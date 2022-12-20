#include<stdio.h>
int main()
{
    long long int no,c=0;
    scanf("%lld",&no);
    while
    (no>0)
     {
        no=no/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}