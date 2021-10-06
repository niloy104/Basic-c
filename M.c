#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x == 1)
    {
        printf("%d", -1);
    }
    else
    {
        int result = x - x % 2;
        printf("%d %d", result, 2);
    }
    return 0;
}