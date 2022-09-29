#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int len = s.length();
    vector<pair<char,int>>order;
    for(int i =0;i<len;i++){
        order.push_back({s[i],i});
    }
    for(auto p:order){
        cout<<p.first << "->"<<p.second<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
