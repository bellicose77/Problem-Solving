#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
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
    for(int i =0;i<n;i++){
        cout<<p[i].first<<" => "<<p[i].second<<endl;
    }

return 0;
}
