#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,ct,cx;
    cin>>n>>m>>k;
    vector<int>v;
    vector<int>c;
    for(int i=0;i<n;i++)
    {
        cin>>cx;
        v.push_back(cx);
    }
    for(int i=0;i<m;i++)
    {
        cin>>ct;
        c.push_back(ct);
    }
    int y=0;
    for(int i=0;i<max(n,m);i++)
    {
        if(k >(v[i] || c[i]))
              {
                  k-=v[i];

                  y++;
                  k-=c[i];
                  cout<<"k"<<k<<c[i]<<endl;
                  y++;
              }

    }
    cout<<y<<endl;
    return 0;
}
