#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,pro=1 ;
    cin>>n;
    while(n--)
    {
        cin>>x;
        pro*=x;
    }
    if(pro>1000000000000000000)
    {
        cout<<-1<<endl;
    }
    else
    {
         cout<<pro<<endl;
    }

    return 0;
}
