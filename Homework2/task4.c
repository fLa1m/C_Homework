#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int x;
    printf("¬ведите четырехзначное положительное число: \n");
    scanf("%d", &x);
    printf("%.2f\n", ((x / 1000) + ((x % 1000) / 100) + ((x % 100) / 10) + (x % 10)) / 4.0);
    return 0;
}
