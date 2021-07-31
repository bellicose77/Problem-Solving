#include<bits/stdc++.h>
using namespace std;
void permutation(string s)
{
    string t=s;
    //cout<<t<<endl;
    sort(s.begin(),s.end());
    int c=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]!=t[i])
       {
           c++;
       }
    }
    cout<<c<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        permutation(s);
    }
    return 0;
}
