#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string v="heidi";
    int c=0,h=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==v[c])
        {
            c++;
            h++;
        }
    }
    if(h==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
