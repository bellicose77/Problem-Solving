#include<bits/stdc++.h>
using namespace std;
void histogram(int x,char a)
{
    for(int i=0;i<x;i++)
    {
        cout<<a;
    }
    cout<<endl;
}
int main()
{
    char a;
    int n,x;
    cin>>a;
    cin>>n;
    while(n--)
    {
        cin>>x;
        histogram(x,a);
    }

    return 0;
}
