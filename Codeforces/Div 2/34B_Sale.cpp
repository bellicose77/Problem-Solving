#include<bits/stdc++.h>
using namespace std;
int sale(int a,int b)
{
    int c,sum=0;
    vector<int>v;
    while(a--)
    {
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<b;i++)
    {
        if(v[i]<=0)
        {
          sum+=v[i];
        }

    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int x=sale(n,m);
    cout<<abs(x)<<endl;
    return 0;
}
