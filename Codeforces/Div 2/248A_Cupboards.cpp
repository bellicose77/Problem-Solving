#include<bits/stdc++.h>
using namespace std;
/* other codes
    if(l_close <= l_open && r_close < r_open)
        cout << l_close + r_close;
    else if(l_open < l_close && r_open <= r_close)
        cout << l_open + r_open;
    else if(l_close <= l_open && r_open < r_close)
        cout << l_close + r_open;
    else if(l_open < l_close && r_close <= r_open)
        cout << l_open + r_close;
        */
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
