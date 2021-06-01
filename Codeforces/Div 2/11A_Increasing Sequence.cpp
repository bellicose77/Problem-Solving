#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x;
    cin>>n>>t;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);

    }
    int c=0;
    for(int i=2;i<=n;i++)
    {
        if(v[i]<=v[i-1])
        {
            int temp=(v[i-1]-v[i]+t)/t;
            v[i]+=temp*t;
            c++;
        }

    }
    cout<<c<<endl;
}
