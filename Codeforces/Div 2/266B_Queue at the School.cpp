#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        char temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;
            }
        }

    }
    cout<<s<<endl;
    return 0;
}
