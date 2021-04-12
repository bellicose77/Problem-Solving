#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
