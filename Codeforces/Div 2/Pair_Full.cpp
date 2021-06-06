
#include<bits/stdc++.h>
using namespace std;
bool sortbysecdesc(const pair<int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}

void print_vector(vector<pair<int,int>>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" -> "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    int n,x,y;
    cin>>n;
    vector<pair<int,int>>v;
    while(n--)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));//v.push_back({x,y})
    }

    //sort(v.begin(),v.end(),sortbysecdesc);
    sort(v.begin(),v.end());
    //reverse(v.begin(),v.end());
    print_vector(v);

    /*
    int n,x,y;
    cin>>n;
    pair<int,int>p[n];

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p[i]={x,y};
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    */
    return 0;
}
