/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int d,int b)
{
    if(d==0)
    {
        return b;
    }
    if(b==0)
    {
        return d;
    }
    if(d==b)
    {
        return d;
    }
    if(d>b)
    {
        return gcd(d-b,b);
    }
    else
    {
        return gcd(d,b-d);
    }

}
int digit_sum(int s)
{
    int sum=0;
   while(s!=0)
   {
       sum+=s%10;
       s/=10;
   }
   return sum;
}
int gcd_sum(int n)
{
    for(int i=n;i<=100;i++)
    {
        int v=digit_sum(i);
        int g=gcd(i,v);
        if(g>1)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=gcd_sum(n);
        cout<<x<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std ;
long long int gcd(long long int n)
{
    long long int v=n,sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    while(1)
    {
        if(((v%3==0) && (sum%3==0)) || ((v%2==0) &&(sum%2==0)))
        {

            return v;
            break;
        }
        else
        {
            v++;
            sum++;
        }

    }


}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<gcd(n)<<endl;

    }
    return 0;
}


