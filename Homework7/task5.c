#include <stdio.h>

const static int COUNT = 10;

void print_array(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
}

int array_search(int *array, int *new_array, int len)
{
    int new_len = 0;
    for (int i = 0; i < len; i++)
    {
        if ((array[i] / 10) % 10 == 0)
        {
            new_array[new_len] = array[i];
            new_len++;
        }
    }
    return new_len;
}

int main(int argc, char const *argv[])
{
    int numbers[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int new_numbers[COUNT];
    print_array(new_numbers, array_search(numbers, new_numbers, COUNT));
    return 0;
}
