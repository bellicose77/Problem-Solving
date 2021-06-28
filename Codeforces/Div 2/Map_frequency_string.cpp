#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }
    for(auto p:mp)
    {
        cout<<p.first<<"->"<<p.second<<endl;
    }

    return 0;
}
