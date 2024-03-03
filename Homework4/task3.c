#include <stdio.h>

int main(void)
{
    int a, flag = 1;
    scanf("%d", &a);
    while (a != 0)
    {
        int num = a % 10;
        if (num % 2 != 0)
        {
            flag = 0;
            goto skip;
        }
        a /= 10;
    }
skip:
    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    } 
    return 0;
}
