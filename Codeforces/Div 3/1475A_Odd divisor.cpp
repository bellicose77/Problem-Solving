#include<bits/stdc++.h>
using namespace std;
/*
void odddivisor(long long int n)
{
    vector<long long int>v;
    int flag=0;
    for(long long int i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            if(i>1)
            {
                if(i%2!=0)
                {
                    flag=1;
                    break;
                }
            }
            if(n/i==i)
            {
                 if(n%2!=0)
                {
                    flag=1;
                    break;
                }
            }
            else
            {
               long long int x=n/i;
               if(x%2!=0)
               {
                   flag=1;
                   break;
               }
            }
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else if(flag==1)
    {
        cout<<"YES"<<endl;
    }


}
*/
void odd_divisor(long long int n)
{
    int flag=0;
    if(n%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        while(n>1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%2!=0)
            {
               flag=1;
               break;
            }

        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }

}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        odd_divisor(n);
    }
    return 0;
}
