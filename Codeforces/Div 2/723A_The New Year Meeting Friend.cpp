#include<bits/stdc++.h>
using namespace std;
int min_distance(vector<int>v)
{
    sort(v.begin(),v.end());

    int y=v[1]-v[0];
    int b=v[2]-v[1];
    return y+b;
}
int main()
{
    int x1,x2,x3;
    vector<int>v;
    cin>>x1>>x2>>x3;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    int x=min_distance(v);
    cout<<x<<endl;
    return 0;
}
