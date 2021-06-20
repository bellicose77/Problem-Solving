#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Yes"<<endl;
    }
    else  if(flag==1)
    {
        cout<<"No"<<endl;
    }

    return 0;
}
