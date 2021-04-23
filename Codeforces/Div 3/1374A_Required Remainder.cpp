#include<bits/stdc++.h>
using namespace std;
void requird()
{
    long long int x,y,n,q,d,r;
    cin>>x>>y>>n;
    r=n%x;
    q=n/x;
    if(r>=y)
    {
        d=x*q+y;
    }
    else
    {
        d=x*(q-1)+y;
    }
    cout<<d<<endl;

}
/*
void requird()
{
    long long int x,y,n,k,p;
    cin>>x>>y>>n;
    p=floor((n-y)/x);
    k=p*x+y;
    cout<<k<<endl;
}
*/
/*
void requird()
{
    long long int x,y,n,r,d;
    cin>>x>>y>>n;
    r=n%x;
    if(r-y>=0)
    {
        d=n-(r-y);
    }
    else
    {
      d=(n-r-x)+y;

    }
    cout<<d<<endl;

}
*/

/*
void requird()
{
    long long int x,y,n;
    cin>>x>>y>>n;
    while(n>=0)
    {
        if(n%x==y)
        {
            cout<<n<<endl;
            break;
        }
        else
            n-=1;
    }
}
*/
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        requird();
    }
    return 0;
}
