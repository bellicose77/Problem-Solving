#include<bits/stdc++.h>
using namespace std;
void more_ram(int n,int k){
    int x,y;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>y;
        b.push_back(y);
    }
    pair<int,int>p[n];
    for(int i=0;i<n;i++){
        p[i]={a[i],b[i]};
    }
    sort(p,p+n);
    int sum=k;
    for(int i = 0;i<n;i++){
        if(p[i].first<=k){
            sum+=p[i].second;
            k=sum;
        }
    }
    cout<<sum<<endl;

}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        more_ram(n,k);

    }
    return 0;
}
