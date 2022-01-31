#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;

    cin>>t;
    while(t--){
            string s;
        cin>>n;
        cin>>s;
        if(s=="1" || s=="0"){
            cout<<"YES"<<endl;
        }
        else if(s=="10" || s=="01"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
