#include <stdio.h>

const static int SIZE = 5;

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void sort_array(int *array, int *numbers, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {
            numbers[count++] = array[i];
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 != 0)
        {
            numbers[count++] = array[i];
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
    int sort_numbers[SIZE];
    sort_array(numbers, sort_numbers, SIZE);
    print_array(sort_numbers, SIZE);
    return 0;
}
