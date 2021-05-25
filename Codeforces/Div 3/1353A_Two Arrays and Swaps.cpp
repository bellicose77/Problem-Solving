#include<bits/stdc++.h>
using namespace std;
int sum(int n,int k)
{
    int x,y,temp;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);

    }

    for(int i=0; i<n; i++)
    {
        cin>>y;
        b.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        if(k!=0)
        {
            if(a[i]<b[i])
            {
                temp=a[i];
                a[i]=b[i];
                b[i]=temp;
                k--;
            }
        }
    }
    int sum=0;
    for(auto c:a)
    {
        sum+=c;
    }
    return sum;

}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int total=sum(n,k);
        cout<<total<<endl;

    }
    return 0;
}
