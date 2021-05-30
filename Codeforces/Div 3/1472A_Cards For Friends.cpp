/*
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
it was two month ago
*/
#include<bits/stdc++.h>
using namespace std;

bool sheet(long long int w,long long int h,long long int n)
{
    if((w%2!=0) && (h%2!=0))
    {
        long long int x=w/w;
        if(x>=n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if((w%2==0)&& (h%2==0))
    {

        int c=0,d=0;

        while(w%2!=1)
        {
            if(w==2)
            {
                c+=2;
            }
            else
            {
                if(w%2==0)
                {
                  c++;
                }


            }
            w/=2;
        }

        c*=2;
        while(h%2!=1)
        {
            if(h==2)
            {
                d+=2;
            }
            else
            {
                if(h%2==0)
                {
                     d++;

                }


            }
            h/=2;
        }

        d*=2;
        if((c*d)>=n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {

        if((w%2==0)&& (h%2==1))
        {
            int s=0;
            while(w%2!=1)
            {
                if(w==2)
                {
                    s+=2;
                }
                else
                {
                    if(w%2==0)
                    {
                        s++;
                    }


                }
                w/=2;
            }

            if((s*2)>=n)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if((w%2==1) && (h%2==0))
        {
            int v=0;
            while(h%2!=1)
            {
                if(h==2)
                {
                    v+=2;
                }
                else
                {
                    if(h%2==0)
                        v++;

                }
                h/=2;
            }

            if((v*2)>=n)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

}

int main()
{
    long long int t,w,h,n;
    cin>>t;
    while(t--)
    {
        cin>>w>>h>>n;
        if(sheet(w,h,n))
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
