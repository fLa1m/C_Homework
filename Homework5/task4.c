#include <stdio.h>

int numbers_sum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    printf("%d", numbers_sum(number));
    return 0;
}
