#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    while(n%2==0)
    {
        cout<<2;


        n/=2;
        if(n>1)
        {
            cout<<" X ";
        }
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
           cout<<i;
           n/=i;
           if(n>1)
           {
               cout<<" X ";
           }
        }

    }

    if(n>2)
    {
        cout<<n<<endl;
    }
    cout<<endl;

}
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    prime(n);

    }

    return 0;
}
