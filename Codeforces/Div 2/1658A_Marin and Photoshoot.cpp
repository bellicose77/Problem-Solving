#include<bits/stdc++.h>
using namespace std;
void marin(int n){
string s;
cin>>s;
int c=0;
for(int i=0;i<n-1;i++){
    if(s[i]=='0' && s[i+1]=='0'){
        c+=2;
        //cout<<c<<endl;
    }
    else if(s[i]=='0' && s[i+1]=='1'){
        if(s[i+2]=='0'){
            c+=1;
            //cout<<c<<endl;
        }

    }

}
cout<<c<<endl;

}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        marin(n);
    }

return 0;
}
