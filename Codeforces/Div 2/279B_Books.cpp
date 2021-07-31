#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,x;
    cin>>n>>t;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sum=0;
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum<=t)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
