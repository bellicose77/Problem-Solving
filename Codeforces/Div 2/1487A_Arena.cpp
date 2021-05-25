#include<bits/stdc++.h>
using namespace std;
int winner_hero(int n)
{
    int x,c=0;
    vector<int>v;

    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size() ;i++)
    {
        if(v[i+1]>v[i])
        {
            c++;
            v[i+1]++;
            cout<<v[i+1]<<" ";
        }
    }
    cout<<endl;
    return c;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res=winner_hero(n);
        cout<<res<<endl;
    }
    return 0;
}
