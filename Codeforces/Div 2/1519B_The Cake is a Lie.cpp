#include<bits/stdc++.h>
using namespace std;
void cake()
{
    int n,m,k,p;
    cin>>n>>m>>k;
    p=(n*m)-1;
    if(p==k)
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
    int t;
    cin>>t;
    while(t--)
    {
        cake();
    }
    return 0;
}
