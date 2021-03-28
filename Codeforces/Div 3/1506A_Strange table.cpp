#include<bits/stdc++.h>
using namespace std;
long long int strangetable(long long int n,long long int m,long long int x)
{
    long long int co;
    long long int ro;
    if(x%n==0)
    {
      co=x/n;
      ro=n;
    }
    else{
        co=(x/n)+1;
        ro=x%n;
    }
    return (ro-1)*m+co;
}
int main()
{
    int t;
    long long int row,column,number;
    cin>>t;
    while(t--)
    {
        cin>>row>>column>>number;
        long long int x=strangetable(row,column,number);
        cout<<x<<endl;
    }
    return 0;
}
