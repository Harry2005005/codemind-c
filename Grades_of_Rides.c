#include <stdio.h>
int main() 
{
    int hurl_fact, spin_fact, speed_fact;
    scanf("%d %d %d", &hurl_fact, &spin_fact, &speed_fact);

    int grade;
    if (hurl_fact > 50 && spin_fact > 60 && speed_fact > 100)
    {
        grade = 10;
    }
    else if (hurl_fact > 50 && spin_fact > 60) 
    {
        grade = 9;
    } 
    else if (spin_fact > 60 && speed_fact > 100) 
    {
        grade = 8;
    }
    else if (hurl_fact > 50 && speed_fact > 100) 
    {
        grade = 7;
    }
    else if (hurl_fact > 50 || spin_fact > 60 || speed_fact > 100) 
    {
        grade = 6;
    }
    else
    {
        grade = 5;
    }

    printf("%d
", grade);

    return 0;
}