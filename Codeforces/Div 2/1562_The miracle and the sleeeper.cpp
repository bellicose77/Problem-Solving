#include<bits/stdc++.h>
using namespace std;
/*
long long int sleeper(long long int l,long long int r)
{
    long long int d;
    long long int diff = abs(l-r);
    if(l==1)
    {

        d= ceil(r/(2*1.0)) -1;
    }
    else if(diff<=3)
    {
        return diff;
    }
    else
    {
        if(r%l!=0)
        {
            d = r/2 + 1;
            return (r-d);
        }
        else if(r%l==0)
        {
            d=r/2 + 1;
            return (r-d);

        }
    }
}
*/
long long int sleeper(long long int l,long long int r)
{
    long long int diff,dou;
    diff = abs(l-r);
    if(diff<l)
    {
        return diff;
    }
    else{
      if(r%2==0)
      {
          dou=r/2;
          return dou-1;
      }
      else
      {
          dou=r/2;
          return dou;
      }
    }
}

int main()
{

    int t;
    long long int  l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        long long int x =sleeper(l,r);
        cout<<x<<endl;
    }
    return 0;
}
