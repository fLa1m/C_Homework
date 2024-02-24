#include <stdio.h>

int main(void)
{
    // Windows 11, VSCode
    int a = 9, b = 3;
    printf("%d",(a *= b) + (b *= a)); // 108
    return 0;
}
