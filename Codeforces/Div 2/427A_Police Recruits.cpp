#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        sum+=x;
        if(sum<0)
        {
            c++;
            sum=0;
        }
    }
    cout<<c<<endl;
    return 0;
}
