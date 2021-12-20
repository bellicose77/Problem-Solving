#include<bits/stdc++.h>
using namespace std;
void birthday(vector<int>v){
    int si=v.size();
    //cout<<si-2<<endl;
    if(si<3){
        cout<<0<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<(si-1)/2<<endl;
    sort(v.begin(),v.end());
    for(int i =0;i<v.size()-1;i+=2){
        int temp=v[i];
        v[i]=v[i+1];
        v[i+1]=temp;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }

}
int main(){
    int n,x;
    cin>>n;
    vector<int>v;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    birthday(v);
return 0;
}
