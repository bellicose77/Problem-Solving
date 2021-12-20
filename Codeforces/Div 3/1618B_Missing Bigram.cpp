#include<bits/stdc++.h>
using namespace std;
void bigram(int n)
{
    string s[n];
    for(int i=0;i<n-2;i++){
        cin>>s[i];
    }
    string ans = s[0];
    int c=0;
    for(int i =1;i<n-2;i++){
        int z = ans.size()-1;
        if(ans[z]==s[i][0]){
            ans+=s[i][1];
        }
        else{
            c=1;
            ans+=s[i];
        }
    }
    if(c==0){
        ans+='a';
        cout<<ans<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bigram(n);
    }
    return 0;
}
