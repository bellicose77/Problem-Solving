#include<bits/stdc++.h>
using namespace std;
long long int plus_one(int n)
{
    long long int x;
    vector<long long int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long int sm = v[0];
    long long int lg =v[n-1];
    return (lg-sm);

}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int result = plus_one(n);
        cout<<result<<endl;
    }
}
