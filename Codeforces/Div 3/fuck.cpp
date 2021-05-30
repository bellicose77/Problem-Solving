#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n%2!=1)
    {
        if(n==2)
          {
              c+=2;
          }
          else
          {
              if(n%2==0);
              c++;

          }
          n/=2;
      }


    cout<<c<<endl;
}
