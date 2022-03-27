#include<bits/stdc++.h>
using namespace std;
void marin(int n){
string s;
cin>>s;
int c=0;
for(int i=0;i<n-1;i++){
    if(s[i]==0 && s[i+1]==0){
        c+=2;
    }
    else if(s[i]==0 && s[i+1]==1){
        if(s[i+2]==1){
            c++;
        }
        else {
            c;
        }
    }
}

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
