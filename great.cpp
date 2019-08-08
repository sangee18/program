#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
int max=0;
cin>>a>>b>>c;
if(a>=b)
  { if(a>=c)
      max=a;
    else
      max=c;
  }
  else
  if(b>a)
  {
      if(b>c)
      max=b;
      else
      max=c;
  }
  else
   max=c;
 cout<<max;
return 0;
}
