#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<7;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    while(1)
    {

        if(v[0]>=n)
        {
            cout<<1<<endl;
            break;
        }
        n=n-v[0];
        if(v[1]>=n)
        {
            cout<<2<<endl;
            break;
        }
        n=n-v[1];
        if(v[2]>=n)
        {
            cout<<3<<endl;
            break;
        }
        n=n-v[2];
        if(v[3]>=n)
        {
            cout<<4<<endl;
            break;
        }
        n=n-v[3];
        if(v[4]>=n)
        {
            cout<<5<<endl;
            break;
        }
        n=n-v[4];
        if(v[5]>=n)
        {
            cout<<6<<endl;
            break;
        }
        n=n-v[5];
        if(v[6]>=n)
        {
            cout<<7<<endl;
            break;
        }
        n=n-v[6];
    }
    return 0;
}
