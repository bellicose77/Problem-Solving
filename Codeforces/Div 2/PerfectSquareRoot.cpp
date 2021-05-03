#include<bits/stdc++.h>
using namespace std;
bool perfectsquare(double n)
{
    long long y;
    y=sqrt(n);
    if((y*y)==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool puzzele(long long int n)
{
    double x,g;
    x=(n/(2*1.0));
    g=(n/(4*1.0));

    if(perfectsquare(x)|| perfectsquare(g))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    double x;
    long long  int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            puzzele(n);
        }

    }
    return  0;
}
