#include <stdio.h>

int sum_bin(int n)
{
    if (n / 2 == 0)
    {
        return n % 2;
    }
    else
    {
        return n % 2 + sum_bin(n / 2);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum_bin(n));
    return 0;
}
