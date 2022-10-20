#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,m,x,y;
cin>>t;
while(t--){
    cin>>n>>m;
    int u;
    u=m;
    while(m--){
        cin>>x>>y;
    }
    if(n==1){
        cout<<"NO"<<endl;
    }
    else if(n==u){
         cout<<"NO"<<endl;
    }
    else if(u<n){
            //cout<<"ey ghore dhukce"<<endl;
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
