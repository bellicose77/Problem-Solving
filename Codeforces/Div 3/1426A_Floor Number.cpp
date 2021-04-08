#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,v;
    cin>>t;
    int n,x;
    while(t--)
    {
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            int minu=n-2;
            if(minu%x!=0)
            {
                v=minu/x+1;

            }
            else
            {
                 v=minu/x;
            }
            cout<<v+1<<endl;

        }
    }
    return 0;
}
