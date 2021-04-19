#include<bits/stdc++.h>
using namespace std;
void Average()
{
    int n,x;
    cin>>n;
    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2!=0)
        {
            o.push_back(x);
        }
        else
        {
            e.push_back(x);
        }
    }
    for(int i=0;i<o.size();i++)
    {
        cout<<o[i]<<" ";
    }
    for(int i=0;i<e.size();i++)
    {
        cout<<e[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Average();
    }
    return 0;
}
