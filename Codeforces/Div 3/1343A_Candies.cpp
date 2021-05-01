#include<bits/stdc++.h>
using namespace std;
void candies()
{
    long long int n,p;
    cin>>n;
    for(int i=2;i<=10e9;i++)
    {
        p=pow(2,i)-1;
        if(n%p==0)
        {
           cout<<n/p<<endl;
           break;
        }

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        candies();
    }
    return 0;
}
