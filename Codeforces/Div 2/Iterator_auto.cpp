#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    for(auto j:v)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    return 0;
}
