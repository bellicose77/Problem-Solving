#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<=v.size();j++)
        {
            if(v[i]==v[j+i+1])
            {
                v[i]=0;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;

    return 0;
}
