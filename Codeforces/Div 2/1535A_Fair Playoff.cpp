#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        int fi=max(a,b);
        int se=max(c,d);
        int fim=min(a,b);
        int sem=min(c,d);
        int max_ma=max(fi,se);
        int min_ma=min(fi,se);
        if((min_ma>=fim) && (min_ma>=sem) )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
