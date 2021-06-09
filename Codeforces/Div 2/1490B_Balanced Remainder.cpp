#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int x,c0=0,c1=0,c2=0;
        cin>>n;
        while(n--)
        {

            cin>>x;
            if(x%3==0)
            {
                c0++;
            }
            if(x%3==1)
            {
                c1++;
            }
            if(x%3==2)
            {
                c2++;
            }
        }
        if((c0==c1) || (c0==c2) || (c2==c1))
        {
            int Max=max(c0,max(c1,c2));
            int Min=min(c0,min(c1,c2));
            cout<<Max-Min<<endl;
        }
        else
        {
            int one=abs(c0-c1);
            int two=abs(c1-c2);
            cout<<abs(one-two)<<endl;
        }
    }
    return 0;
}
