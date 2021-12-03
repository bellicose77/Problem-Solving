#include<bits/stdc++.h>
using namespace std;
int total_candies(vector<int>v,int a,int b)
{
    int sum=0;
    for(int i = a;i<=b;i++)
    {
        //cout<<i<<endl;
        sum+=v[i];
    }
    return sum;
}
int main()
{
    int x,a,b,g;
    cin>>x;
    vector<int>v;
    while(x--)
    {
        cin>>g;
        v.push_back(g);
    }
    cin>>a>>b;
    int sum = total_candies(v,a,b);
    cout<<sum<<endl;
    return 0;
}
