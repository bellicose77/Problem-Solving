#include<bits/stdc++.h>
using namespace std;
void local(int n)
{
    int b=n-2;
    int x;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    int c=0;
    for(int i=1; i<v.size()-1; i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            c++;
            if(i!=b)
            {
                if(v[i]>v[i+2])
                {
                    v[i+1]=v[i];
                }
                else
                {
                    v[i+1]=v[i+2];
                }

            }
            else{
                     v[i+1]=v[i];

            }

        }
    }
    cout<<c<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        local(n);
    }

    return 0;
}
