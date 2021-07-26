#include<bits/stdc++.h>
using namespace std;
void coins(long long int n)
{
    if(n%3==0)
    {
        int x=n/3;
        cout<<x<<" "<<x<<endl;
    }
    else
    {
        int c1=n/3;
        //cout<<c1<<endl;
        int d=n-c1;
        if(d%2==0)
        {
      cout<<c1<<" "<<d/2<<endl;
        }
        else
        {
            cout<<c1+1<<" "<<d/2<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        coins(n);
    }
    return 0;
}
