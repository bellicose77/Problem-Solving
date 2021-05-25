#include<bits/stdc++.h>
using namespace std;
int candies(long long int n)
{
    long long int x,c=0;
    x=floor(n/(2*1.0));
    for(int i=n;i>x+1;i--)
    {
        c++;

    }
    return c;
}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ways=candies(n);
        cout<<ways<<endl;
    }
    return 0;
}
