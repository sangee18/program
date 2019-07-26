#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    sum=fact(n);
    printf("%d",sum);
    return 0;
    
}
