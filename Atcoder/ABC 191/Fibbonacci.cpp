#include<bits/stdc++.h>
using namespace std;
int Fibbonacci(int n)
{
    if(n<=1)
    {
        return n;

    }
    else
    {
        return Fibbonacci(n-1)+Fibbonacci(n-2);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i<n)
        {
        int x= Fibbonacci(i);
        cout<<x<<",";
        }


    }


    return 0;
}
