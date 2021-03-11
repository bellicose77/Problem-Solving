#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    long long int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        long long int result=fact(x);
        cout<<result<<endl;
    }
    return 0;
}
