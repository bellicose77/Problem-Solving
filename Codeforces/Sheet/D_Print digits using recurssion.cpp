#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
    if(n==0)
    {
        return n;
    }
    else
    {
        int x=n%10;
        digit(n/10);
        return x;

    }


}
int main()
{
    int n,x;
    cin>>x;
    while(x--)
    {
    cin>>n;
    int v=digit(n);
    printf("%d",&v);
    }


    return 0;
}
