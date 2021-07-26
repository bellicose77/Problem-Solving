#include<bits/stdc++.h>
using namespace std;
void prime_factor(int n)
{
    while(n%2==0)
    {
        cout<<2<<" ";
        n/=2;
    }


    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2)
    {
        cout<<n;
    }
    cout<<endl;

}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        prime_factor(n);
    }
    return 0;
}
