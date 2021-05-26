#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,z;

    cin>>t;
    while(t--)
    {
        vector<int>v;
        cin>>x>>y>>z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(),v.end());
        if(v[2]!=v[1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<v[2]<<" "<<v[0]<<" "<<v[0]<<endl;
        }
    }
    return 0;
}
