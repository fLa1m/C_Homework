#include <stdio.h>

const static int SIZE = 5;

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void change_max_min(int len, int *arr)
{
    int max = arr[0];
    int max_pos = 0;
    int min = arr[0];
    int min_pos = 0;

    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_pos = i;
        }
        else if (min > arr[i])
        {
            min = arr[i];
            min_pos = i;
        }      
    }

    int tmp = arr[min_pos];
    arr[min_pos] = arr[max_pos];
    arr[max_pos] = tmp;
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
    change_max_min(SIZE, numbers);
    print_array(numbers, SIZE);
    return 0;
}
