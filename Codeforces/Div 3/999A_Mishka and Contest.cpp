#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    int s=0;
    cin>>n>>k;
    vector<int>v;
    vector<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(auto it=0;it<v.size();it++)
    {
        cout<<"c:"<<v[it];
         if(*it<=k)
        {
            cout<<"b:"<<*it<<" ";
            s++;
            v.erase(it);
        }
        else
        {
            break;
        }

    }
    for(int i=v.size()-1;i>0;i--)
    {
        if(v[i]>k)
        {
            break;
        }
        else if(v[i]<=k)
        {
            cout<<v[i]<<" ";
            s++;
            v.pop_back();
        }
    }



    cout<<s<<endl;


    return 0;
}
