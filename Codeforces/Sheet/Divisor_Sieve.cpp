#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            if(n%j==0)
            sum+=j;
        }
    }
    cout<<sum<<endl;
    return 0;
}
