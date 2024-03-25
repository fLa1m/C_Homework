#include <stdio.h>

const static int COUNT = 5;

int main(int argc, char const *argv[])
{
    int numbers[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }

    float sum;

    for (int i = 0; i < COUNT; i++)
    {
        sum += numbers[i];
    }
    
    printf("%.3f", sum/(float)COUNT);
    return 0;
}
