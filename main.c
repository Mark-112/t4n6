#include <stdio.h>
#include <stdlib.h>

int sum(int *a, int *b, int c, int d)
{
    int x, y, x1, y1, i, n;
    x = *a*d + *b*c;
    x1 = x;
    y = *b*d;
    y1 = y;
    while ((x1 != 0) && (y1 != 0))
    {
        if (x1 > y1)
            x1 = x1 - y1;
        else
            y1 = y1 - x1;
    }
    if (x1 != 0)
        n = x1;
    else
        n = y1;
    *a = x/n;
    *b = y/n;

    return 0;
}

int main()
{
    int a, b, c, d;
    printf("vvedite pervuyu drob\n");
    scanf("%d%d", &a, &b);
    printf("vvedite vtoruyu drob\n");
    scanf("%d%d", &c, &d);
    sum(&a, &b, c, d);
    printf("%d/%d", a, b);

    return 0;
}
