#include<bits/stdc++.h>
using namespace std;
int min_light(int n,int m)
{
    int c=ceil(((n*m)/(2*1.0)));
    return c;
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int light=min_light(n,m);
        cout<<light<<endl;
    }
    return 0;
}
