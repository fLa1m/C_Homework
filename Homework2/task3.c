#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("������� ��� ����� ����� ������: \n");
    scanf("%d%d", &a, &b);
    printf("%d - %d = %d\n", a,b,a - b);
    return 0;
}
