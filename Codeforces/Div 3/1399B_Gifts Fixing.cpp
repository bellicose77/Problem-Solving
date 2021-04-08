#include<bits/stdc++.h>
using namespace std;
void gift(int n)
{
    long long int a,b,c=0;
    vector<long long int>v;
    vector<long long int>x;
    for(long long int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(long long int j=0; j<n; j++)
    {
        cin>>b;
        x.push_back(b);
    }
    long long  int candy=*min_element(v.begin(),v.end());
    int orange=*min_element(x.begin(),x.end());
    vector<long long int>f;
    vector<long long int>g;
    for(long long int i=0;i<v.size();i++)
    {
        f.push_back(abs(v[i]-candy));
    }
    for(long long int j=0;j<x.size();j++)
    {
        g.push_back(abs(x[j]-orange));
    }
    for(long long int i=0;i<f.size();i++)
    {
        if(f[i]>=g[i])
        {
            c+=f[i];
        }
        if(g[i]>f[i])
        {
            c+=g[i];
        }
    }

    cout<<c<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        gift(n);
    }
    return 0;
}
