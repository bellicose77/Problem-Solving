#include<bits/stdc++.h>
using namespace std;
void waytolong(string s,int x)
{
    if(x<10)
    {
        cout<<s<<endl;
    }
    else
    {
        string t=s.substr(1,x-2);
        string too=to_string(t.length());
        cout<<too<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    int x=s.length();
    waytolong(s,x);
    return 0;
}
