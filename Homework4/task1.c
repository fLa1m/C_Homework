#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b, sum;
    scanf("%d%d", &a, &b);
    if (a <= b && a < 100 && b < 100)
    {
        for (int i = a; i <= b; i++)
        {
            sum += i*i;
        }
        printf("%d", sum);
    }
    else
    {
        printf("Некорректные данные.");
    }
    
    return 0;
}
