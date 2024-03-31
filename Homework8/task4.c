#include <stdio.h>

const static int SIZE = 5;

int is_two_same(int len, int *arr)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                return 1;
                break;
            }
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("%s", (is_two_same(SIZE, numbers)) ? "YES" : "NO");
    return 0;
}
