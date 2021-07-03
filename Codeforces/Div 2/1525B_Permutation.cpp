#include<bits/stdc++.h>
using namespace std;
void permutation_sort(vector<int>v,int u)
{
    bool flag=true;
    for(int i=0;i<v.size()-1;i++)
    {

        if(v[i]>v[i+1])
        {
            flag=false;
            break;
        }
    }
    int x=v.size();
    if(flag)
    {
        cout<<0<<endl;
    }
    else
    {
        if((v[0]==1) || (v[u-1]==u))
        {
            cout<<1<<endl;
        }
        else if(v[0]==u && v[u-1]==1)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}
int main()
{
    int n,d,x;
    cin>>n;
    while(n--)
    {
        vector<int>v;
        cin>>x;
        int u=x;
        while(x--)
        {
            cin>>d;
            v.push_back(d);
        }
        permutation_sort(v,u);
    }
    return 0;
}
