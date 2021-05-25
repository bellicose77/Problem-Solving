#include<bits/stdc++.h>
using namespace std;
int total_calories(int a,int b,int c,int d)
{
    int tol=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            tol+=a;
        }
        else if(s[i]=='2')
        {
            tol+=b;
        }
        else if(s[i]=='3')
        {
            tol+=c;
        }
        else if(s[i]=='4')
        {
            tol+=d;
        }
    }
    return tol;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res=total_calories(a,b,c,d);
    cout<<res<<endl;
    return 0;
}
