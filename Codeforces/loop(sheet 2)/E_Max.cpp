#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int temp=v[0];
    for(int i=0;i<v.size()-1;i++)
    {

        if(temp<v[i+1])
        {
            temp=v[i+1];

        }

    }
    cout<<temp<<endl;
}
