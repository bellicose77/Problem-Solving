#include<bits/stdc++.h>
using namespace std;
void sumn(long long int a,long long int b)
{
    long long int s=0,e=0,o=0;
    if(a>=b)
    {
        for(long long int i=b;i<=a;i++)
        {
            s+=i;

            if(i%2==0)
            {
                e+=i;

            }
            else if(i%2!=0)
            {
                o+=i;

            }
        }
        cout<<s<<endl;
        cout<<e<<endl;
        cout<<o<<endl;

    }
    else if(b>a)
    {
        for(long long int i=a;i<=b;i++)
        {
            s+=i;
            if(i%2==0)
            {
                e+=i;
            }
            else
            {
                o+=i;
            }
        }
        cout<<s<<endl;
        cout<<e<<endl;
        cout<<o<<endl;

    }
}

int main()
{
    long long int n,x;
    cin>>n>>x;
    sumn(n,x);



    return 0;
}
