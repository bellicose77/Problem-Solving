#include<bits/stdc++.h>
using namespace std;
void odd_set(int n)
{
    int x,e=0,o=0;
    for(int i=1;i<=n*2;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e==o)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        odd_set(n);
    }
    return 0;
}
