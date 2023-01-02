#include<stdio.h>
int main()
{
      int x,sq,c=1,n=0;
      scanf("%d",&n);
       x=n;
     sq=n*n;
      while (n!=0)
     {
          c=c*10;
          n=n/10;
     }
      if(sq%c==x)  
           printf("Automorphic Number");
      else
           printf("Not an Automorphic Number");
}