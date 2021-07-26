#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<2)
    {
        return false;
    }
    else if(n<=3)
    {
        return true;
    }
    else if(n%2==0)
    {
        return false;
    }

    else
    {
        int flag=0;
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return true;
        }
        else if(flag==1)
        {
            return false;
        }
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(prime(n))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
