#include <stdio.h>

int count(int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    return count(n - 1) + count(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n != 0 || n > 1) {
        printf("%d\n", count(n));
        return 0;
    } else{
        printf("Ошибка ввода");
    }

    return 0;
}