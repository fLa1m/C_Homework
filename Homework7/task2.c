#include <stdio.h>

const static int COUNT = 5;

int main(int argc, char const *argv[])
{
    int numbers[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];

    for (int i = 1; i < COUNT; i++)
    {
        if (min > numbers[i])
        {
            min = numbers[i];
        }
    }
    printf("%d", min);
    return 0;
}
