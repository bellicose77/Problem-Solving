#include<bits/stdc++.h>
using namespace std;
int beautiful_array(int n)
{

    if(n==1)
    {
        return 1;
    }
    else
    {
    int sum=1;
    int x=1;
    int c=0;
        while(sum<=n)
        {
            c++;
            x+=2;
            sum+=x;
        }
        //cout<<x<<endl;
        int last=n-(sum-x);
        //cout<<last<<endl;
        if(last<=0)
        {
            return c;
        }
        else
        {
            return c+1;
        }
    }

}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res=beautiful_array(n);
        cout<<res<<endl;
    }
    return 0;
}
