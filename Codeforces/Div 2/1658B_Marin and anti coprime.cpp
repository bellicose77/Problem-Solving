#include<bits/stdc++.h>
using namespace std;
int coprime(int n)
{
    if(n%2==1){
        return 0;
    }
    else{
        return 2;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int result = coprime(n);
        cout<<result<<endl;
    }
    return 0;
}
