#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n,i,j,ans=0,x,y;
    cin>>n;
    vector<pair<ll,ll>> a;
    bool ok=false;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        a.push_back({x,y});
    }
    for(i=0; i<n; i++)
    {
        ok=false;
        for(j=0; j<n; j++)
        {
            if(i==j) continue;
            if(a[i].first==a[j].second)
            {
                ok=true;
                break;
            }
        }
        if(!ok) ans++;
    }
    cout<<ans<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solve();
}
