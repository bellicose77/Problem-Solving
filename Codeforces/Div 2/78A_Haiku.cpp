#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,u;
    getline(cin,s);
    getline(cin,t);
    getline(cin,u);
    int c=0,se=0,th=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c++;
        }
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
        {
            se++;
        }
    }
     for(int i=0;i<u.size();i++)
    {
        if(u[i]=='a' || u[i]=='e' || u[i]=='i' || u[i]=='o' || u[i]=='u')
        {
            th++;
        }
    }
    if(c==5 && se==7 && th==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
/*

using namespace std;

int help(string s) {
    int cnt = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='a' || s[i]=='e' || s[i]== 'i' || s[i]=='o' ||s[i]=='u')
            cnt++;
    }

    return cnt;
}

int main() {
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    if(help(a)==5 && help(b)==7 && help(c)==5)
        cout<<"YES";
    else
        cout<<"NO";
}
*/
