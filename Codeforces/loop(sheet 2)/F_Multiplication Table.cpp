#include<bits/stdc++.h>
using namespace std;
void table(int n)
{
    int sum;
    for(int i=1;i<=12;i++)
    {
        sum=n*i;
        cout<<n<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<sum<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    table(n);
    return  0;
}
