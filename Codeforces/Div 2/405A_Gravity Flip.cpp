#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto c: v)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}
