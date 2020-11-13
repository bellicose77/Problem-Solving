#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>a>>b;
        sum+=a+b;
        v.push_back(sum);
        //cout<<v[0];
    }
    for(int i=0;i<v.size();i++)
    {
        printf("Case %d: %d\n",i+1,v[i]);
    }
    return 0;
}
