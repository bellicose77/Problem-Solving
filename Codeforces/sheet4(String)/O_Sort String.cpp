#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char temp=s[0];
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
