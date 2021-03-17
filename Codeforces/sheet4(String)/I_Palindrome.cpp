#include<bits/stdc++.h>
using namespace std;
void plaindrome(string s)
{
    int n=s.length();
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            flag=1;
            break;
        }


    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==1)
    {
        cout<<"NO"<<endl;
    }
}
 int main()
 {
     string s;
     cin>>s;
     plaindrome(s);
     return 0;
 }
