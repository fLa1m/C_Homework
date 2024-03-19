#include <stdio.h>

void print_num(void)
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        return;
    }
    if (a % 2 != 0)
    {
        printf("%d ", a);
    }
    print_num();
}

int main(int argc, char const *argv[])
{
    print_num();
    return 0;
}
