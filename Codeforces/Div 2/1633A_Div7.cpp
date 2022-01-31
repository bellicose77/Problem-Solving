#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        }
        else{
           int  re=n%7;
           int di=7-re;
           int last = n%10;
           if(last+di<10){
            cout<<n+di<<endl;
           }
           else{
            cout<<n-re<<endl;
           }


        }
    }
return 0;
}
