#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,l,r;
    cin>>n;
    vector<int>arr(n,0);
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&l,&r);
        arr[l]++;
        if(arr[r+1]<n)
        {
            arr[r+1]--;
        }


    }
    for(int i=1; i<n; i++)
    {
        arr[i]+=arr[i-1];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
