#include<bits/stdc++.h>
using namespace std;
/* other person code
   int x= a.compare(b);
    cout<<x;
    */
void petya(string s,string t)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>t[i])
            {
                cout<<1<<endl;
                 break;
            }
            else if(s[i]<t[i])
            {
                cout<<-1<<endl;
               break;
            }
        }
    }

}
int main()
{
    string s;
    string t;
    cin>>s>>t;
    petya(s,t);
    return 0;
}
