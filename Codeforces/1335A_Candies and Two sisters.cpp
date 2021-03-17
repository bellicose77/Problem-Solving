#include<bits/stdc++.h>
using namespace std;
long long int candies(long long int c)
{
    return (c-1)/2;
}
int main()
{
    int t;
    long long int c;

    cin>>t;
    while(t--)
    {
     cin>>c;
      long long int ways=candies(c);
      cout<<ways<<endl;
    }

    return 0;
}
