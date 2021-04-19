#include<bits/stdc++.h>
using namespace std;
/* other person's code
  sort(str.begin() , str.end());
for(int i=0 ; i<str.length() ; i++){
if(str[i]==str[i+1])
b++;
}
if((str.length()-b)%2==0)
*/
int main()
{
    string s;
    cin>>s;
    int x=0;
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                s[j]=0;
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=0)
        {
            x++;
        }
    }
    if(x%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
