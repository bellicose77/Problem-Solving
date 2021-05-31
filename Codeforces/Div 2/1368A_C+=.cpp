#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,n;
    cin>>t;
    while(t--)
    {
        long long int c=0;
        cin>>a>>b>>n;
        long long int x=max(a,b);
        while(x<=n)
        {
            if(a>=b)
            {
                b+=a;
                c++;
            }
            else if(b>=a)
            {
                a+=b;
                c++;
            }
            x=max(a,b);
        }
        cout<<c<<endl;
    }
    return 0;
}
