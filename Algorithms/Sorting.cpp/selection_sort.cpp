#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>v,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_valu=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]< v[min_valu])
            {
                min_valu=j;
            }
        }
        int temp=v[i];
        v[i]=v[min_valu];
        v[min_valu]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    selection(v,n);
    return 0;
}
