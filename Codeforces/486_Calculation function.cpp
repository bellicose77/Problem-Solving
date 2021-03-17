#include<bits/stdc++.h>
using namespace std;
void Function(long long int n)
{
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        long long int t=-(n+1)/2;
        /* other person code
        return ((n-1)/2)-n;
        */
}
        cout<<t<<endl;
    }
}
int main()
{
    long long int n;
    cin>>n;
    Function(n);
    return 0;
}
