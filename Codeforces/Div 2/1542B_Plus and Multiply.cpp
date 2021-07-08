#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int x)
{
    long long int result=1;
    for(long long int i=0;i<x;i++)
    {
        result*=a;
    }
    //cout<<"Res:"<<result<<endl;
    return result;
}
void plus_multiply()
{
    long long int n,a,b;
    cin>>n>>a>>b;
    if(n==1 || b==1 || n%b==1)
    {
        cout<<"Yes"<<endl;
    }
    else if(a==1)
    {
        if(n%b==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else
    {
       long long int x=0,power_a;
       int flag=0;
       while(power(a,x)<=n)
       {
           power_a=n-power(a,x);
           if(power_a%b==0)
           {
               flag=1;
               break;
           }
           x++;

       }
       if(flag==0)
       {
           cout<<"No"<<endl;
       }
       else if(flag==1)
       {
           cout<<"Yes"<<endl;
       }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        plus_multiply();
    }
    return 0;
}
