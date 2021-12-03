#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return sum(n-1)+n;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res = sum(n);
        cout<<res<<endl;
    }
    return 0;
}
