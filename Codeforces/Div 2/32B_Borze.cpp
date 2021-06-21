#include<bits/stdc++.h>
using namespace std;
/*  other codes
  while(s[i]!='\0'){
        if(s[i]=='.'){
            cout<<"0";
            i++;
        }
        else if(s.substr(i,2)=="-."){
            cout<<"1";
            i+=2;
        }
        else if(s.substr(i,2)=="--"){
            cout<<"2";
            i+=2;
        }
    }
    */
void borze(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<2;
            i++;
        }
        else
        {
            cout<<0;
        }
    }
    cout<<endl;
}
int main()
{
    string s;
    cin>>s;
    borze(s);
    return 0;
}
