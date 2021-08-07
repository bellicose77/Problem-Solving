#include<bits/stdc++.h>
using namespace std;
int val1,val2;
bool pair_f(vector<int>v,int f)
{
    int sum=0;
    sort(v.begin(),v.end());
    int i=0,j=v.size()-1;
    while(i<j)
    {
        sum=v[i]+v[j];
        if(sum==f)
        {
            val1=v[i];
            val2=v[j];

            return true;
        }
        if(sum>f)
        {
            j--;
        }
        else if(sum<f)
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int n,x,f;
    cin>>n>>f;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    if(pair_f(v,f))
    {
        cout<<"YES"<<endl;
        cout<<val1<<" -> "<<val2<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
