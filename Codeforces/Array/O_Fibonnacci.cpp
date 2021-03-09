#include<bits/stdc++.h>
using namespace std;
int fibbonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibbonacci(n-1)+fibbonacci(n-2);
    }
}
int main()
{
    int n;
    cin>>n;
    int x=fibbonacci(n-1);
    cout<<x<<endl;
    return 0;
}
