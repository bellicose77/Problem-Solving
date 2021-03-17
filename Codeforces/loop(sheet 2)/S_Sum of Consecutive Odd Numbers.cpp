#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n>>m;
        if(n>=m)
        {
            for(int i=m+1;i<n;i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
            cout<<sum<<endl;
        }
        else if(m>n)
        {
            for(int i =n+1;i<m;i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
