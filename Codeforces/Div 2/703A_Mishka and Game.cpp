#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,w=0,l=0;
    cin>>n;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)
        {
            w++;
        }
        else if(c>m)
        {
            l++;
        }
    }
    if(w>l)
    {
        cout<<"Mishka"<<endl;
    }
    else if(l>w)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
