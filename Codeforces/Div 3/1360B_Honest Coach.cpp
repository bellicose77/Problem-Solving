#include<bits/stdc++.h>
using namespace std;
void HonestCoach(int n)
{
    int x,diff;
    vector<int>v;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size()-1;i++)
    {
        diff=v[i]-v[i+1];
        a.push_back(diff);
    }

    cout<<*min_element(a.begin(),a.end())<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        HonestCoach(n);
    }
    return 0;
}
