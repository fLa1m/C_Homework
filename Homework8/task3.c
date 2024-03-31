#include <stdio.h>

const static int SIZE = 10;

int max(int *arr, int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("%d", max(numbers, SIZE));
    return 0;
}
