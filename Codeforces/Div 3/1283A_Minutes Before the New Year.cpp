#include<bits/stdc++.h>
using namespace std;
int minute(int h,int m)
{
    int x=(h*60)+m;
    int n=1440;
    return(n-x);
}
int main()
{
    int t,h,m;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        int left=minute(h,m);
        cout<<left<<endl;
    }
}
