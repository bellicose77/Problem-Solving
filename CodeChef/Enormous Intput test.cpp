#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,t,c=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>t;
        if(t%k==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
