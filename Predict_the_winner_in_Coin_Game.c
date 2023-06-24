#include<stdio.h>

int win(int m, int n)
{
    if (m % 2 == 0 || n % 2 == 0)
    {
        return 1;  // Player 1 wins
    }
    else
    {
        return 2;  // Player 2 wins
    }
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int winner = win(m, n);

    if (winner == 1) 
    {
        printf("Player 1
");
    }
    else 
    {
        printf("Player 2
");
    }

    return 0;
}