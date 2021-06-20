#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        vector<int>::iterator it;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        int max_s=*max_element(v.begin(),v.end());
        int min_s=*min_element(v.begin(),v.end());
        if(((v[0]==min_s) && (v[1]==max_s)) || ((v[0]==max_s) && (v[1]==min_s)))
        {
            cout<<2<<endl;
        }
        else if(((v[0]==min_s) && (v[n-1]==max_s)) || ((v[0]==max_s) && (v[n-1]==min_s)))
        {
            cout<<2<<endl;
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
                if((v[i]==min_s )
            }
        }


    }
    return 0;
}
