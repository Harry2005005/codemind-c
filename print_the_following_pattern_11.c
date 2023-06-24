#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        char ch = i + 64;
        for (int j = 1; j <= N; j++) 
        {
            printf("%c ", ch);
        }
        printf("
");
    }

    return 0;
}