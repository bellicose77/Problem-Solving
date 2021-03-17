#include<bits/stdc++.h>
using namespace std;
long long int divisibility(long long int a,long long int b)
{
    long long int c=0;
    if(a%b==0)
    {

        return c;
    }
    else
    {
       /*while(a%b!=0)
       {
           a+=1;
           c++;
       }
       return c;
      */
      return (b-(a%b));
    }
}
int main()
{
    int t;
    long long int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        long long int x=divisibility(a,b);
        cout<<x<<endl;
    }
    return 0;
}
