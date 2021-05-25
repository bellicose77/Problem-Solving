#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum=0,c=0,tow=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s==4)
        {
            c++;
        }
        else if(s==3 || s==1)
        {
            sum+=s;
        }
        else if(s==2)
        {
            tow+=s;
        }
    }
    int x=ceil(sum/(4*1.0));
    int y=ceil(tow/(4*1.0));
    cout<<x+y+c<<endl;
    return 0;
}
