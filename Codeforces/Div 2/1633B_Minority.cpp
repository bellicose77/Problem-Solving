#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
            string s;
        cin>>s;
        long long int one=0,zero=0;
        for(long long int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }

        }
        //cout<<zero<<" ->"<<one<<endl;
        if(zero==1 && one==1){
            cout<<0<<endl;
        }
        else if(zero==one){
            cout<<zero-1<<endl;
        }
        else if(zero==0 || one==0){
            cout<<0<<endl;
        }
        else if(zero<one){
            cout<<zero<<endl;
        }
        else{
            cout<<one<<endl;
        }

    }
return 0;
}
