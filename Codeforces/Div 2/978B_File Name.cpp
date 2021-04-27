#include<bits/stdc++.h>
using namespace std;
/*
 other person code
  for(i=0; i<s.size()-2; i++)
    {

           if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
              cn++;
           }

    }
    */
void xxx(int n)
{
    int c=0,f=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='x')
        {
            c++;
        }
        else
        {
            c=0;

        }
        if(c>=3)
        {
            f++;
        }

    }
   cout<<f<<endl;
}
int main()
{
    int n;
    cin>>n;
    xxx(n);
    return 0;
}
