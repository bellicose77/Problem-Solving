#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,y;
    vector<int>v;
    vector<int>::iterator it;
    cin>>x>>n;
    while(x--)
    {
        cin>>y;
        v.push_back(y);
    }
    for(auto it=v.begin();it!=v.end();++it)
    {
        if(it==n)
        {
         v.erase(*it);

        }
    }
    for(int it=v.begin();it!=v.end;it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
