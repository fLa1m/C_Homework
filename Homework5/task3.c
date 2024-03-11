#include <stdio.h>

int is_happy_number(int n)
{
    int flag = 1;
    int sum = 0;
    int mult = 1;
    while (n > 0)
    {
        sum += n % 10;
        mult *= n % 10;
        n /= 10;
    }
    if (sum != mult)
    {
        flag = 0;
    }
    return flag;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    printf("%s", is_happy_number(num) == 1 ? "YES" : "NO");
    return 0;
}
