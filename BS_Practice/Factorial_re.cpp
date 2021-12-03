#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res = fact(n);
        cout<<res<<endl;
    }
    return 0;
}
