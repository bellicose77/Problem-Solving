#include<bits/stdc++.h>
using namespace std;
/*
while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            for(int i=1;i<=n;i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<"\n";
            continue;
        }
        for(int i=1;i<=n-3;i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<n<<" "<<n-2<<" "<<n-1<<"\n";
        */
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int temp;
        vector<int>v;
        cin>>n;
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                v.push_back(i);
            }
            for(int i=0;i<v.size()-1;i+=2)
            {
                temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
            for(auto j:v)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else
        {
            vector<int>c;
            if(n==1)
            {
                cout<<1<<endl;
            }
            else if(n==3)
            {
                cout<<3<<" "<<1<<" "<<2<<endl;
            }
            if(n>3)
            {
                for(int i =4;i<=n;i++)
                {
                    c.push_back(i);
                }
                int change;
                for(int i=0;i<c.size()-1;i+=2)
                {
                    change=c[i];
                    c[i]=c[i+1];
                    c[i+1]=change;
                }
                cout<<3<<" "<<1<<" "<<2<<" ";
                for(auto h:c)
                {
                    cout<<h<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
