#include<bits/stdc++.h>
using namespace std;
void cherry()
{
    int n,a,x;
    cin>>n;
    int k=n;
    vector<int>v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    //sort(v.begin(),v.end(),greater<int>());
    long long ma,max_x=0;
    for(int i=1;i<k;i++)
    {
      ma=1LL*v[i]*v[i-1];
      max_x=max(max_x,ma);
    }
   cout<<max_x<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cherry();
    }
    return 0;
}
