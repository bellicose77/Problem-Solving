#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    int flag=0;
    reverse(t.begin(),t.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
