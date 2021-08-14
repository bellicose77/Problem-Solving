/*
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
*/
/* Time limit exceed code
#include<bits/stdc++.h>
using namespace std;
int books(vector<int>v,long long int n)
{
    int max_b = 0;
    for(int i=0;i<v.size();i++)
    {
        int c=0,sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum+=v[j];
            if(sum<=n)
            {
                c++;
            }
        }
        max_b = max(max_b,c);
    }
    return max_b;
}
int main()
{
    int t,x;
    long long int n;
    cin>>t>>n;
    vector<int>v;
    while(t--)
    {
        cin>>x;
        v.push_back(x);
    }
    int res = books(v,n);
    cout<<res<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int books(vector<int>v,long long int n)
{
    int sum=0,j=0,c=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum<=n)
        {
            c++;
        }
        else
        {
            sum-=v[j];
            j++;
        }
    }
    return c;
}
int main()
{
    int t,x;
    long long int n;
    cin>>t>>n;
    vector<int>v;
    while(t--)
    {
        cin>>x;
        v.push_back(x);
    }
    int res = books(v,n);
    cout<<res<<endl;
    return 0;
}
