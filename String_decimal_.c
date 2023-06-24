#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool string(const char* str)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++) 
    {
        if (str[i] < '0' || str[i] > '9') 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) 
    {
        char str[10000];
        scanf("%s", str);
        bool is_decimal = string(str);
        if (is_decimal) 
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}