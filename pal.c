#include<stdio.h>
#include<math.h>
int main()
{
    int N,orig,rem;
    int rev=0;
    scanf("%d",&N);
    orig=N;
    while(N!=0)
    {
        rem=N%10;
        rev=rev*10+rem;
        N=N/10;
        
    }
    if(rev==orig)
     printf("yes");
     else 
     printf("no");
return 0;     
    
}
