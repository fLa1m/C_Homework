#include <stdio.h>

const static int COUNT = 12;

void print_array(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
}

void shift_array_right(int *array, int len)
{
    int temp = array[len - 1];
    for (int i = len - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = temp;
}

int main(int argc, char const *argv[])
{
    int numbers[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        shift_array_right(numbers, COUNT);
    }
    print_array(numbers, COUNT);  
    return 0;
}
