#include<bits/stdc++.h>
using namespace std;
void two_sum(int n,int t){
    int x;
    vector<int>v;
    while(n--){
        cin>>x;
        v.push_back(x);

    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==t){
                cout<<i<<","<<j<<endl;
                break;
            }
        }
    }
}
int main(){
    int n,t;
    cin>>n>>t;
two_sum(n,t);


return 0;
}
