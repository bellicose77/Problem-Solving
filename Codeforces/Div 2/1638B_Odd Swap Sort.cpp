#include<bits/stdc++.h>
using namespace std;
void swap_sort(int n){
    long long int x;
    vector<long long int>v;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    int flag=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
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
        swap_sort(n);
    }
return 0;
}
