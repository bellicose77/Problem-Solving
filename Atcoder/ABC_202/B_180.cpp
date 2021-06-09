#include<bits/stdc++.h>
using namespace std;
void rotate_string(string s)
{
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='6')
        {
            cout<<9;
        }
        else if(s[i]=='9')
        {
            cout<<6;
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}
int main()
{
    string s;
    cin>>s;
    rotate_string(s);
}
