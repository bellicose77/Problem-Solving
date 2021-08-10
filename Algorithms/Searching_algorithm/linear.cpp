#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int>v)
{
    int val;
    cin>>val;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==val)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }
        int index = linear_search(v);
        cout<<index<<endl;
    }
}
