#include<bits/stdc++.h>
using namespace std;
int equality(vector<int>v)
{
    int y=*max_element(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=y-v[i];
    }
    return sum;
}
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {
     int min_cost=equality(v);
     cout<<min_cost<<endl;
    }

    return 0;
}
