#include<bits/stdc++.h>
using namespace std;

int gcd(int di,int fa)
{
    if(di%fa==0)
    {
        return fa;
    }
    else
    {
        return gcd(fa,di%fa);
    }
}
void reordering(vector<int>v,int nu)
{
    int gc;
    vector<int>ev;
    vector<int>od;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
        {
            ev.push_back(v[i]);
        }
        else
        {
            od.push_back(v[i]);
        }
    }
    int odd=od.size();
    int even=nu-odd;
    long long int sum = odd*even;
    for(int i=0;i<odd-1;i++)
    {
        for(int j=i+1;j<odd;j++)
        {
            int gc=gcd(od[i],2*od[j]);
            if(gc>1)
            {
                sum++;
            }
        }
    }
    sum+=(even*(even-1)/2);

    cout<<sum<<endl;
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int nu;
        cin>>n;
        nu=n;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }
        reordering(v,nu);

    }
}
