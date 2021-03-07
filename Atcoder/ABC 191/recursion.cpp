#include<bits/stdc++.h>
using namespace std;
void onetoN(int n)
{
    if(n==5)
    {
        return;
    }
    else
    {
        cout<<n<<" ,";
        onetoN(n-1);
        cout<<n<<" ,";
        ;
    }
}
int main()
{
    int n,x;
    cin>>n;
    onetoN(n);
    return 0;
}
