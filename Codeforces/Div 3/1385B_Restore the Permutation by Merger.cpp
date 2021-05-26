#include<bits/stdc++.h>
using namespace std;
void merger(int n)
{
    int x;
    bool arr[n+1];
    memset(arr,0,sizeof(arr));
    int res[n+1];
    for(int i=1,j=1;i<=n*2;i++)
    {
        cin>>x;
        if(!(arr[x]))
        {
            res[j]=x;
            j++;
            arr[x]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        merger(n);
    }
    return 0;
}
