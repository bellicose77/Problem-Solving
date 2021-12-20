#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int x = s.length();
        if(s[0]==')' || s[x-1]=='(')
        {
            cout<<"NO"<<endl;
        }
        else{
                int c=0;
            for(int i=0;i<x;i++){
                if(s[i]=='?'){
                    c++;
                }
            }
        if(c%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
return 0;
}
