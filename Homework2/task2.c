#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    printf("Введите числа через пробел: \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
    return 0;
}