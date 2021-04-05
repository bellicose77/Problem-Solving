#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,s,f,t,tr;
    cin>>a>>b>>c>>s;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(s);
    sort(v.begin(),v.end());
    f=v[3]-v[0];
    t=abs(v[1]-f);
    tr=abs(v[3]-(f+t));
    cout<<f<<" "<<t<<" "<<tr<<endl;
    return 0;
}
