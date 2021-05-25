#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,t,u,y;
    cin>>s>>t>>u>>y;
    vector<long long int>v;
    v.push_back(s);
    v.push_back(t);
    v.push_back(u);
    v.push_back(y);
    sort(v.begin(),v.end());
    int c=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
