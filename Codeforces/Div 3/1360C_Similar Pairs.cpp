#include<bits/stdc++.h>
using namespace std;
void SimilarPairs(int n)
{
    int x,e=0,d=0,o=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
       if(v[i]%2==0)
       {
           e++;
       }
        else{
        o++;
         }
    }
    for(int i=0;i<v.size()-1;i++)
    {
        if(abs(v[i]-v[i+1])==1)
        {
            d++;
        }
    }

    if(e%2==0 && o%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(e%2!=0 && o%2!=0 && d>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        SimilarPairs(n);
    }
    return 0;
}
