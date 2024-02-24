#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a < b ? b : a;
    max = max < c ? c : max;
    max = max < d ? d : max;
    max = max < e ? e : max;
    printf("%d", max);
    return 0;
}
