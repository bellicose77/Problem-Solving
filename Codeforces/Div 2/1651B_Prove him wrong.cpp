#include<bits/stdc++.h>
using namespace std;
void wrong(int n){
    int x;
    vector<int>v;
    v.push_back(1);
    //cout<<v[0]<<endl;
    for(int i=0;i<n-1;i++){
        x=v[i]*3;
        if(x<1000000000){
            v.push_back(x);
        }
    }
    if(v.size()==n){
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        wrong(n);
    }
return 0;
}
