#include<bits/stdc++.h>
using namespace std;
int substring(string a,string b)
{ int c=0;
    if(a.find(b)!=string::npos)
    {
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    string a;
    string b;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;

        printf("Case %d : %d\n",i,substring(a,b));
    }
    return 0;
}
