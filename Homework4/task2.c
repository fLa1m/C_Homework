#include <stdio.h>

int main(void)
{
    int a, count;
    scanf("%d", &a);
    do
    {
        a /= 10;
        count++;
    } while (a != 0);
    
    if (count == 3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
