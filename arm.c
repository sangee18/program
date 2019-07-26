#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, tmp1, tmp2, rem, n = 0, result = 0;
    scanf("%d %d", &a, &b);

    for(i = a+1; i<b; ++i)
    {
        tmp2 = i;
        tmp1 = i;
        while (tmp1 != 0)
        {
            tmp1 /= 10;
            ++n;
        }
        while (tmp2 != 0)
        {   rem = tmp2 % 10;
            result = result + pow(rem, n);
            tmp2 /= 10;
        }
        if (result == i) 
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
    return 0;
