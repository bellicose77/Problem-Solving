/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        cin>>n;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }
        int c=0;
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                int mul=v[i]*v[j];
                if(mul==((i+1)+(j+1)))
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x;
    cin>>t;
    while(t--)
    {
        vector<pair<long long ,long long >>v;
        cin>>n;
        for(long long  i=0; i<n; i++)
        {
            cin>>x;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        int c=0;
        for(long long  i=0; i<n; i++)
        {
            for(long long  j=i+1; j<n; j++)
            {
                long long  mul=v[j].first*v[i].first;
                if(mul>2*n)
                {
                    break;
                }
                if(mul==(v[j].second+v[i].second))
                {
                    c++;
                }

            }
        }
        cout<<c<<endl;
       /*
        for(auto p:v)
        {
            cout<<p.first<<" ->"<<p.second<<endl;
        }
        */

    }
    return 0;
}
