#include<bits/stdc++.h>
using namespace std;
void shovel()
{
    long long int n,k,temp;
    cin>>n>>k;
    if(n<=k)
    {
        cout<<1<<endl;
    }
    else
    {
        temp=1;
        for(long long int i=1; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                if((n/i>temp) && (n/i)<=k)
                {
                    temp=n/i;
                }
                if(i>temp && i<=k)
                {
                    temp=i;
                }




            }
        }
        /*
        for(int i =0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        */
        cout<<n/temp<<endl;

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        shovel();
    }
    return 0;
}
