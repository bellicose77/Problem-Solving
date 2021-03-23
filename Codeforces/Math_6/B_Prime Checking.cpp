#include<bits/stdc++.h>
using namespace std;
void prime(long long int n)
{
    bool flag=true;
    if(n==1)
    {
        cout<<"NO"<<endl;
    }
    else if(n==2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(long long int i=2;i<=sqrt(n);++i)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }

        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==false){
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    long long int n;
    cin>>n;
    prime(n);
    return 0;
}
