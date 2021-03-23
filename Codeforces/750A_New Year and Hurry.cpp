#include<bits/stdc++.h>
using namespace std;
int cansolve(int n,int k)
{
    int x=240-k;
    int sum=0,c=0;
    for(int i=1;i<=n;i++)
    {
        int t=5*i;
        sum+=t;
        if(sum<=x)
        {
            c++;
        }
    }
    cout<<c<<endl;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cansolve(n,k);
    return 0;
}
