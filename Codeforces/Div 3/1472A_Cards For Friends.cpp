#include<bits/stdc++.h>
using namespace std;
long long int sheets(int w,int h,long long int n)
{
    long long int c=0;
    if(w%2==0 || h%2==0)
    {
        if(w%2==0)
        {
            while(w>1)
            {
                if(w%2==0)
                {
                    c+=2;

                }
                w=w/2;

            }
        }
        if(h%2==0)
        {

            while(h>1)
            {
                if(h%2==0)
                {

                    c+=2;

                }
                h=h/2;
            }
        }
        return c;
    }
    else
    {
        return 1;
    }

}
int main()
{
    int t,w,h;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>w>>h>>n;
        long long int x=sheets(w,h,n);
        if(x>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
