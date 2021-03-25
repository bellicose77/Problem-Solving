#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    int p=-1;
    while(n--)
    {
        cin>>x;
        if(x==1 && p!=-1)
        {
            v.push_back(p);
        }
        p=x;

    }
    v.push_back(p);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
