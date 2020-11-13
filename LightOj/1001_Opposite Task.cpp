#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,di;
    cin>>t;
    while(t--)
    {
        di=0;
        cin>>a;
        if(a>10)
        {
            di=a-10;
        }
        cout<<di<<" "<<a-di<<endl;

    }
    return 0;
}
