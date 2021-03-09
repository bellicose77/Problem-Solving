#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int sum=0;
    for(long long int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                sum+=i;
            }
            else
            {
                sum+=i+(n/i);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
