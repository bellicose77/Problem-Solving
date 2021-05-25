#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int c=1;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int s=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==s)
            {
                c++;
            }
        }

        cout<<n-c<<endl;
    }
    return 0;
}
