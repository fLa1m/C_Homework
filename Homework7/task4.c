#include <stdio.h>

const static int COUNT = 10;

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void sort(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (array[j] % 10 < array[i] % 10)
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
    int numbers[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }
    sort(numbers, COUNT);
    print_array(numbers, COUNT);
    return 0;
}
