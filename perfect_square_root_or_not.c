#include <stdio.h>
#include <math.h>
 
int main()
{
    int n,i;
    float f;
    scanf("%d",&n);
    f=sqrt((float)n);
    i=f;
    if(i==f)
        printf("True");
    else
        printf("False");
}