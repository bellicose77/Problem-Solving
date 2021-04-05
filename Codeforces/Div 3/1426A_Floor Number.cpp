#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
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
            for(int i=2;i<n;i++)
            {
                int f=i*x;
                if(n<=f)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
