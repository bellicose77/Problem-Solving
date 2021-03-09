#include<bits/stdc++.h>
using namespace std;
void plaindrome(vector<int>v)
{
    int flag=0;
    int n=v.size();
    int x=v.size()/2;
    for(int i=0;i<=x;i++)
    {
        if(v[i]!=v[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==1)
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    plaindrome(v);
    return 0;
}
