#include<bits/stdc++.h>
using namespace std;
void sss()
{
    string s;
    char c;
    cin>>s;
    cin>>c;
    int flag=0;
    for(int i=0;i<s.length();i+=2)
    {
       if(c==s[i]){
        cout<<"YES"<<endl;
        flag=1;
        break;
       }


    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sss();
    }

    return 0;
}
