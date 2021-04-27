#include<bits/stdc++.h>
using namespace std;
void football(string s)
{
    int o=0,z=0,sa=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            o++;
            z=0;
        }
        else
        {
            z++;
            o=0;
        }
        if(o>=7 || z>=7)
        {
            sa++;
        }
    }
    if(sa>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    football(s);
    return 0;
}
