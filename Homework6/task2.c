#include <stdio.h>

void print_num(int a, int b)
{
    if (a == b)
    {
        printf("%d", a);
    }
    else
    {
        if (a < b)
        {
            printf("%d ", a++);
        }
        else
        {
            printf("%d ", a--);
        }
        print_num(a,b); 
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    print_num(a, b);
    return 0;
}
