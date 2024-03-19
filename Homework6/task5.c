#include <stdio.h>

int count_a(void)
{
    char c;
    scanf("%c", &c);
    if (c == '.')
    {
        return 0;
    }
    else if (c == 'a')
    {
        return count_a() + 1;
    }
    else
    {
        return count_a();
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n", count_a());
    return 0;
}
