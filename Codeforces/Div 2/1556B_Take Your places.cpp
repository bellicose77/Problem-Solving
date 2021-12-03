#include<bits/stdc++.h>
using namespace std;
void place(vector<int>v,int n)
{
    int e=0,o=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    int d = abs(e-o);
    if(e == n || d>=2){
        cout<<-1<<endl;
    }
    else if( o==n || d>=2){
        cout<<-1<<endl;
    }
    cout<<"o:"<<o<<endl;
    cout<<"e:"<<e<<endl;
}
int main()
{

    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        place(v,n);
    }
    return 0;
}
