#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    int x;
    vector<int>v;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    for(auto p:v){
        cout<<p<<" ";
    }
    cout<<endl;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
    }
    return 0;
}

