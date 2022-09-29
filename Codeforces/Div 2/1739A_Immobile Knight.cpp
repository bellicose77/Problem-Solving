#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m){
    if(n==1 || m==1){
        cout<<n<<" "<<m<<endl;
    }
    else if(n<=3 || m<=3){
        cout<<2<<" "<<2<<endl;
    }
    else{
        cout<<n<<" "<<m<<endl;
    }
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        solve(n,m);
    }
}
