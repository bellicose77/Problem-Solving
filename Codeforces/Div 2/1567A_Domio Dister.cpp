#include<bits/stdc++.h>
using namespace std;
void domino(string s)
{
    vector<char>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            v.push_back('L');
        }
        else if(s[i]=='R')
        {
            v.push_back('R');
        }
        else if(s[i]=='U')
        {
            v.push_back('D');
        }
        else if(s[i]=='D')
        {
            v.push_back('U');
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        string s;
        cin>>s;
        domino(s);
    }
    return 0;
}
