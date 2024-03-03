#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a;
    scanf("%d", &a);
    if (a > 10)
    {
        for (int i = 10; i <= a; i++)
        {
            int sum = 0, mult = 1;
            for (int j = i; j != 0; j /= 10)
            {
                sum += j % 10;
                mult *= j % 10;
            }
            if (sum == mult)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        printf("Неверные данные.");
    }
    return 0;
}
