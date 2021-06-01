#include<bits/stdc++.h>
using namespace std;
long long int equ_candies()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    return (floor((a+b+c)/2));
}
int main()
{
    int q;
    cin>>q;
    long long int a,b,c;
    while(q--)
    {
        long long int res=equ_candies();
        cout<<res<<endl;
    }
}
