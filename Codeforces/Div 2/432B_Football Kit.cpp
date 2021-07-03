#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    vector<pair<int,int>>v;
    while(t--)
    {
      cin>>x>>y;
      v.push_back({x,y});
    }
    for(int i=0;i<v.size();i++)
    {

    }
    for(auto p:v)
    {
        cout<<p.first<<"->"<<p.second<<endl;
    }
    return 0;
}
