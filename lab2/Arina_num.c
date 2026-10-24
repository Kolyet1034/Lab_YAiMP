#include <stdio.h>

int a[];

int f(int n, int k)
{
    if (k == n)
        return 0;

    if (k + 2 < n)
    {
        if (a[k] < a[k + 1] && a[k + 1] < a[k + 2])
            return 1;
    }

    return f(n, k + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    if (f(n, 0)){
        printf("true\n");
    } else{
        printf("false\n");
    }
    return 0;
}