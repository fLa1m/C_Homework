#include <stdio.h>

const static int SIZE = 10;

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void sort_array(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (array[j] < array[i])
            {
                swap(&array[i], &array[j]);
            }
        }
    }
}

void print_array(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
}

int main(int argc, char const *argv[])
{
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }
    sort_array(numbers, SIZE);
    print_array(numbers, SIZE);
    return 0;
}
