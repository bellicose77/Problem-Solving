#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k;
    int c=0,y=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<=v.size();j++)
        {
            if(v[i]==v[j+i+1])
            {
                v[i]=0;
            }

        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            c++;
        }
    }
    if(c>=k)
    {
         cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0)
            {
                y++;
                if(y<=k)
                {
                 cout<<i+1<<" ";
                }

            }
        }
        cout<<endl;

    }
    else
    {
       cout<<"NO"<<endl;
    }
    return 0;
}
