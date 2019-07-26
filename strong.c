#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,x,a;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        x=n%10;
        rev=rev+pow(x,3);
        n=n/10;
    }
    if(a==rev)
    printf("ÿes");
    else
    printf("no");
 return 0;    
}

