#include<bits/stdc++.h>
using namespace std;
void vasya(int a,int b)

{
  if(a<=b)
  {
      cout<<a<<" ";
      cout<<(b-a)/2<<endl;
  }
  else
  {
      cout<<b<<" ";
      cout<<(a-b)/2<<endl;
  }
}
int main()
{
    int a,b;
    cin>>a>>b;
    vasya(a,b);
    return 0;
}
