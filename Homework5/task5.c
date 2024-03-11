#include <stdio.h>

int main(void)
{
    char c;
    int sum1 = 0;
    int sum2 = 0;
    while ((c = getchar()) != '.')
    {
        if (c == '(')
        {
            sum1++;
        }
        else if (c == ')')
        {
            sum2++;
        }
    }
    printf("%s", sum1 == sum2 ? "YES" : "NO");
    return 0;
}
