#include<bits/stdc++.h>
using namespace std;
int cupboard(int t)
{
    int l,r;
    int lz=0,lo=0,rz=0,ro=0;
    while(t--)
    {
        cin>>l>>r;
        if(l==0)
        {
            lz++;
        }
        if(l==1)
        {
            lo++;
        }
        if(r==0)
        {
            rz++;
        }
        if(r==1)
        {
            ro++;
        }

    }
    int min_l=min(lz,lo);
    int min_r=min(rz,ro);
    return (min_l + min_r);
}
int main()
{
    int t;
    cin>>t;
    int min_time=cupboard(t);
    cout<<min_time<<endl;
    return 0;
}
