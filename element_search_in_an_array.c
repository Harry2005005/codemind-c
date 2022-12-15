#include<stdio.h>
int main()
{
    int n,i,x,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
      if(a[i]==x)
      {
        f=1;
        break;
      }
    }
    if(f==1)
    {
     printf("True");
    }
    else
    {
       printf("False");
    }
}