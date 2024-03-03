#include <stdio.h>

int main(void)
{
    int a, new_num;
    scanf("%d", &a);
    new_num = a % 10;
    a /= 10;
    while (a != 0)
    {
        new_num = new_num * 10 + a % 10;
        a /= 10;
    }
    printf("%d", new_num);
    return 0;
}