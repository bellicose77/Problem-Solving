#include<bits/stdc++.h>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
       int  x=add(a,b);
        cout<<x<<endl;
    }
    return 0;
}
