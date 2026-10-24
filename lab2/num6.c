#include <stdio.h>

int a[];

int summa(int n, int m, int k)
{
    if (n == 0)
    {
        for (int i = 0; i < k - 1; i++)
            printf("%d + ", a[i]);

        printf("%d\n", a[k - 1]);
        return 1;
    }

    for (int i = n; i >= 1; i--)
    {
        if (i <= m)
        {
            a[k] = i;
            summa(n - i, i, k + 1);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    summa(n, n, 0);
    return 0;
}