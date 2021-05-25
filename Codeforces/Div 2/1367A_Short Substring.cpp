#include<bits/stdc++.h>
using namespace std;
void substring()
{
    string s;
    string u;
    cin>>s;
    u+=s[0];
    u+=s[1];
    for(int i=3;i<s.size();i+=2)
    {
        u+=s[i];
    }
    cout<<u<<endl;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        substring();
    }
    return 0;
}
