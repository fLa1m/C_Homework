#include <stdio.h>

int power_rec(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * power_rec(n, --p);
    }
}

int main(int argc, char const *argv[])
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d\n", power_rec(n, p));
    return 0;
}
