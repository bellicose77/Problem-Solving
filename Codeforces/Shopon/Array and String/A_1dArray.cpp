#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>v)
{
    int su=0;
    for(int i=0;i<v.size();i++)
    {
        su+=v[i];
    }
    return su;

}
int main()
{
    int n,x;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int result=sum(v);
    cout<<result<<endl;
    return 0;
}
