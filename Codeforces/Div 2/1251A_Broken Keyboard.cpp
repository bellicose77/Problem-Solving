#include<bits/stdc++.h>
using namespace std;
void keyboard(string s)
{
    set<char>s1;
    set<char>::iterator it;
    if(s.size()==1)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i=0;i<s.size();)
        {
            if(s[i]!=s[i+1])
            {
                s1.insert(s[i]);
                i++;
            }
            else if(s[i]==s[i+1])
            {
                i+=2;
            }
        }


        for(it=s1.begin(); it!=s1.end(); it++)
        {
            cout<<*it;
        }
        cout<<endl;

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        keyboard(s);
    }
    return 0;
}
