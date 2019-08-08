#include <bits/stdc++.h>
using namespace std;
int main()
{
 int arr[40],i,j,n;
int max=0;
cin>>n;
for(int i=0;i<n;i++)
   cin>>arr[i];
for(int i=1;i<n;i++)
{
       if(arr[0]>arr[i])
         arr[0]=arr[i];
    
}
cout<<arr[0];
return 0;
}
