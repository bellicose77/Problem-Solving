#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,k,x=1;
    double po;
    vector<long long int>v;
    vector<long long int>::iterator it;
    cin>>l>>r>>k;
    while(x<=r)
    {
        if(x>=l)
        {
            v.push_back(x);
        }
        if(x>r/k)
        {
            break;
        }
        x*=k;
    }
    if(v.empty())
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
