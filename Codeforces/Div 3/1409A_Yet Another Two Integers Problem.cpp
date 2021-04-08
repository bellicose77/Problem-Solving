#include<bits/stdc++.h>
using namespace std;
long long int reduce(long long int a,long long int b)
{
    long long int x;
    long long int f;
    int v=0;
    if(a==b)
    {

        return v;
    }
    else
    {
        f=0;
       x=abs(a-b);
       while(x!=0)
       {
           if(x>=10)
           {
               f+=x/10;
               x=x%10;

           }
           if(x>=9)
           {
               f+=x/9;
               x=x%9;

           }
           if(x>=8)
           {
               f+=x/8;
               x=x%8;

           }
           if(x>=7)
           {
               f+=x/7;
               x=x%7;

           }
           if(x>=6)
           {
               f+=x/6;
               x=x%6;

           }
           if(x>=5)
           {
               f+=x/5;
               x=x%5;

           }
           if(x>=4)
           {
               f+=x/4;
               x=x%4;

           }
           if(x>=3)
           {
               f+=x/3;
               x=x%3;

           }
           if(x>=2)
           {
               f+=x/2;
               x=x%2;

           }
           else
           {
               f+=x/1;
               x=x%1;
           }
       }
       return f;
    }
}
int main()
{
    int t;
    long long int a,b,x,f;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        long long int res=reduce(a,b);
        cout<<res<<endl;
    }
    return 0;
}
