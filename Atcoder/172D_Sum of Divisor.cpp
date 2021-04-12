#include<bits/stdc++.h>
using namespace std;
void divisor(long long int n)
{
    long long int ans=0;
    vector<long long int>v(n+1,0);
    for(long long int i=1;i<=n;i++)
    {
        for(long long int j=i;j<=n;j=j+i)
        {
            v[j]++;
        }
    }
    for(long long int i=1;i<=n;i++)
    {
        ans+=(i*v[i]);
    }
    cout<<ans<<endl;
    /*
    int c=0;
    for(long long int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                c++;
            }
            else
            {
                c+=2;
            }
        }
    }
    return c;
    */
}
int main()
{
    long long int n;
    cin>>n;
    divisor(n);
    return 0;
}
