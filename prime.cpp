#include<iostream>
using namespace std;
int main()
{
    int N,flag=1;
    cin>>N;
    for(int i=2;i<N;i++)
   {  if((N%i)==0)
      {    flag=0;
           break;
      }
   }  
   
   if(flag==1)
     cout<<"yes";
   else
     cout<<"no";
   
  return 0;
}
