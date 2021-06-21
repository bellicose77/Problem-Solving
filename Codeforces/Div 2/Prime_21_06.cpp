#include<bits/stdc++.h>
using namespace std;
/* one method
bool prime(int n)
{

    if(n==2)
    {
        return true;
    }
    else
    {
        int c=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
*/
/*
bool prime(int n)
{
    if(n==2)
    {
        return true;
    }
    else
    {
        int flag=0;
        for(int i=2; i<n; i++)
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
*/
/* check weather a number is a prime
   not prime
bool prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    else
    {
        int flag=0;
        for(int i=2;i<=sqrt(n);i++)
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
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(prime(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
/*  print 1 to n all prime number
bool is_prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    else
    {
        int flag=0;
        for(int i=2; i<=sqrt(n); i++)
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
        else
        {
            return false;
        }

    }
}
void prime(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(is_prime(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
*/

  // seive of Eratosthenes
void seive_prime(int n)
{
    bool prime[n+1];
    memset(prime, true,sizeof(prime));
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
      if(prime[i])
      {
          cout<<i<<" ";
      }
    }
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        seive_prime(n);
    }
    return 0;
}
