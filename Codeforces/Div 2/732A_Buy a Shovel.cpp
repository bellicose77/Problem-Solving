#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,x;
    cin>>k>>r;
    for(int i=1;i<=1000;i++)
    {
        if((k*i)%10==0)
        {
            cout<<i<<endl;
            break;
        }
        else if((k*i)%10==r)
        {
            cout<<i<<endl;
                break;
        }
    }

    return 0;
}
