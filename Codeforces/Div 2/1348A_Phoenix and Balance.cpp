#include<bits/stdc++.h>
using namespace std;
int pile(int n)
{
    int sum=1<<n;
    int sum1=0;
    for(int i=1;i<n/2;i++)
    {
        sum+=1<<i;
    }
    for(int i=n/2;i<n;i++)
    {
        sum1+=1<<i;
    }
    return(sum-sum1);
}
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int diff=pile(n);
        cout<<diff<<endl;
    }


    return 0;
}
