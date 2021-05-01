#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='Z' && s[i+1]=='O' && s[i+2]=='N' && s[i+3]=='e')
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
