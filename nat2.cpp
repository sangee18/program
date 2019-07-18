#include<iostream>
using namespace std;
int main()
{
    int N,K,sum=0;
    int a[10];
    cin>>N>>K;
    for(int i=0;i<N;i++)
      cin>>a[i]; 
    for(int i=0;i<K;i++)
       sum+=a[i];
    cout<<sum;
return 0;    
}
