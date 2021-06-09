#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int sum=0;
    while(n--)
    {
        cin>>x;
        if(x>10)
        {
            sum+=(x-10);
        }
    }
    cout<<sum<<endl;
    return 0;
}
