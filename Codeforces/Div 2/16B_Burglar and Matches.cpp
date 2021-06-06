#include<bits/stdc++.h>
using namespace std;
bool desc(const pair<int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}
int main()
{
    int n,m,ma,ka;
    cin>>n>>m;
    int xa=m;
    vector<pair<int,int>>v;
    while(xa--)
    {
        cin>>ma>>ka;
        v.push_back({ma,ka});

    }
    sort(v.begin(),v.end(),desc);
    int sum=0;
    int j=0;
    int y,x=0;
    //cout<<v[j].first;
    /*
    while(n>0)
    {
       y=abs((v[j].first)-x);

       sum+=(v[j].second*y);
       x+=v[j].first;
       cout<<"Y:"<<y<<" "<<"Sum:"<<sum<<" "<<"X: "<<x<<" ";
       j++;
       n-=x;

    }
    cout<<endl;

    cout<<sum<<endl;
    */
    for(int i=0;i<m;i++)
    {
        y=min(n,v[i].first);
        sum+=v[i].second*y;
        n-=y;
    }
    cout<<sum<<endl;
    return 0;
}
