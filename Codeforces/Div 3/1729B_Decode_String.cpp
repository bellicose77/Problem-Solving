#include<bits/stdc++.h>
using namespace std;
void decode(string s,int n){
    string ss ={"abcdefghijklmnopqrstuvwxyz"};
    //cout<<ss[0]<<endl;
    string x;
    for(int i=0;i<n;i++){

        if(s[i]=='0' && s[i+1]=='0'){

            cout<<s[i-1] <<" -> "<< s[i] <<endl;
            i++;
            }
        else if(s[i]=='0' && s[i+1]!='0'){
                cout<<s[i-2] <<" -> "<< s[i-1] <<endl;
                }
        else{
            cout<<s[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        decode(s,n);
    }
return 0;
}
