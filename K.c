#include <stdio.h>
int main()
{
    int n, k, t;
    int count = 0, i;
    scanf("%d %d", &n, &k);
    i = 0;
    while (i < n)
    {
        scanf("%d", &t);
        if (t % k == 0)
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}