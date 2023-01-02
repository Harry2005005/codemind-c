#include<stdio.h>
int main()
{
    int n,rem,Large= 0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(Large<rem)
        {
            Large=rem;
        }
        n=n/10;
    }
    printf("%d",Large);
}
