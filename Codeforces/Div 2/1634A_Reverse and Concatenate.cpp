#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>k;
        cin>>s;
        int x=s.size();
        int flag=0;
        for(int i=0;i<x/2;i++){
            if(s[i]!=s[n-i-1]){
                flag=1;
                break;
            }
        }
        //cout<<flag<<endl;
        if(k==0 || k==1){
            cout<<1<<endl;
        }
        else if(flag==0 )
           {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }
return 0;
}
