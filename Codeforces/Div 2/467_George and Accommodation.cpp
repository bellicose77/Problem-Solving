#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,c=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        int x=q-p;
        if(x>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
