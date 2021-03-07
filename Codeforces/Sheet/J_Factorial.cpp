#include<bits/stdc++.h>
using namespace std;
long long int fact(int n)
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
    long long int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
