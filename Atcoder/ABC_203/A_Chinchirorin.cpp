#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b) && (a==c))
    {
        cout<<a<<endl;
    }
    else if(a==b)
    {
        cout<<c<<endl;
    }
    else if(a==c)
    {
        cout<<b<<endl;
    }
    else if(b==c)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
