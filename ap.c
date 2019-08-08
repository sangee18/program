

#include <stdio.h>

int main()
{
         int a, d, n, i, tn;
     int sum = 0;
 
     scanf("%d %d %d",&n,&a, &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               {}
          else
               printf("%d ", sum);
     }
     return 0;
}
