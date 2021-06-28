#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x;
    vector<int>v;
    string s;
    cin>>s;
    cin>>k;
    for(int i=0;i<26;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(i+1)*v[s[i]-'a'];
    }
    sort(v.begin(),v.end(),greater<int>());
    int val=s.size()+1;
    while(k--)
    {
        sum+=val*v[0];
        val++;
    }
    cout<<sum<<endl;
    return 0;
}
