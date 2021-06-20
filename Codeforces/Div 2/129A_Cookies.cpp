#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int c=n;
    int sum=0,e=0,od=0;
    while(n--)
    {
        cin>>x;
        if(x%2==0)
        {
            e++;
        }
        else
        {
            od++;
            sum+=x;
        }
    }
    if(c==1)
    {
        cout<<1<<endl;
    }
    else
    {
        if(sum%2==0)
        {
            cout<<e<<endl;
        }
        else
        {
            cout<<od<<endl;
        }
    }
    return 0;
}
