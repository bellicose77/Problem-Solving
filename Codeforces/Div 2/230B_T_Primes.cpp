/*
#include<bits/stdc++.h>
using namespace std;

void t_prime(long long int x )
{
    bool prime[1000000]={0};

    for(int p=2; p<=100000; p++)
    {
        if(prime[p]==0)
        {
            for(int j=2; p*j<=1000000; j++)
            {
                prime[p*j]=1;
            }
        }
    }
     long long int s=sqrt(x);
        if(x==1)
        {
            cout<<"NO"<<endl;
        }

        else if((((s*s)==x) && (prime[s]==0)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

}
/*
bool divisor(long long int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(long long int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(long long int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    long long int total=1;
    for(long long int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            long long int c=0;
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                    c++;
                }
                total*=(c+1);
            }
        }
    }

    if(total==3)
    {
        return true;
    }
    else
    {
        return false;
    }

}
*/
/*
bool divisor(long long int n)
{
    long long int cnt = 0;
    for (long long int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    if(cnt==3)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void t_prime(vector<long long int>v)
{
    for(long long int i=0; i<v.size(); i++)
    {
        if(divisor(v[i]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
*/
/*
int main()
{
    long long int t,x;
    cin>>t;
    vector<long long int>v;
    while(t--)
    {
        cin>>x;
        t_prime(x);

    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long int a)
{
    if(a<2)
    {
        return false;
    }
    else if(a==2)
    {
        return true;
    }
    long long int l=sqrt(a);
    if(a%2==0)
    {
        return false;
    }
    for(int j =3;j<=l;j+=2)
    {
        if(a%j==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    long long int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a=sqrt(n);
        if(a*a == n && is_prime(a)==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
