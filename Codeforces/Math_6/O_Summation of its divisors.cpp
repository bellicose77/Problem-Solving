#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<n;
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
