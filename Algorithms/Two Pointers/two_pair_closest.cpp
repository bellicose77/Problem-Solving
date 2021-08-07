#include<bits/stdc++.h>
using namespace std;
void closet_pair(vector<int>v,vector<int>v1,int n,int x)
{
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int i=0, j=n-1,diff= INT_MAX;
    int val1,val2;
    while(i<n && j>=0)
    {
        int sum=v[i]+v1[j];
        if(abs(sum-x)<diff)
        {
            val1=v[i];
            val2 = v1[j];
            diff=abs(sum-x);
        }
        if(v[i]+v1[j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<val1<<" "<<val2<<endl;
}
int main()
{
    int n,x,c,c1,val1,val2;
    cin>>n>>x;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        cin>>c>>c1;
        v.push_back(c);
        v1.push_back(c1);
    }
    closet_pair(v,v1,n,x);
    return 0;
}
