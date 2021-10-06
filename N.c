#include <stdio.h>
int main()
{
    int n, k, rem;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= k; i++)
    {
        rem = n % 10;
        if (rem == 0)
        {
            n /= 10;
        }
        else
        {
            n = n - 1;
        }
    }
    printf("%d\n", n);

    return 0;
}