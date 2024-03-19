#include <stdio.h>

void print_num(int n)
{
    if (n > 10)
    {
        print_num(n / 10);
    }
    printf("%d ", n % 10);
}

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    print_num(a);
    return 0;
}
