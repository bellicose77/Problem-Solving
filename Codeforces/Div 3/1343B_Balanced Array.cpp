#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
      int c=0;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
                 c++;
            }
            for(int i=1;i<n-1;i+=2)
            {
                cout<<i<<" ";

            }
            cout<<n+(c-1)<<endl;
        }

    }
}
