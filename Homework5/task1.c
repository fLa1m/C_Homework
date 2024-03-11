#include <stdio.h>

int count_seeds(int n)
{
    int result = 1;
    for (int i = 1; i < n; i++)
    {
        result *= 2;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    printf("%d", count_seeds(a));
    return 0;
}
