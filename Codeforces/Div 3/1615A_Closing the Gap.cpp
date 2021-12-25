#include<bits/stdc++.h>
using namespace std;
int gap(int n){
int g=n;
int b,sum=0;
int z=0;
while(n--){
    cin>>b;
    sum+=b;
}
if(sum%g==0){
    return z;
}
else{
    return 1;
}
}
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int x= gap(n);
        cout<<x<<endl;
    }
return 0;
}
