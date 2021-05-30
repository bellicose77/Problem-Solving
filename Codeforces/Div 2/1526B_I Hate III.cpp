#include<bits/stdc++.h>
using namespace std;
long long int digit(long long int n)
{
    long long int x=0,v;
    while(n!=0)
    {
        v=n%10;
        x++;
        n/=10;
    }

    return x;
}
bool posible(long long int n)
{
    long long int g=n;
    long long int c=digit(n);

    if(c==1)
    {
        return false;

    }
    else if(c==2)
    {

        if(g%11==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==3)
    {
        long long int thre=abs(g-111);
        if(thre%11==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==4)
    {
        long long int f=abs(g-1111);
        if(f%111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==5)
    {
        long long int fi=abs(g-11111);
        if(fi%1111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==6)
    {
        long long int six=abs(g-111111);
        if(six%11111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==7)
    {
        long long int sev=abs(g-1111111);
        if(sev%111111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==8)
    {
        long long int ei=abs(g-11111111);
        if(ei%1111111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==9)
    {
        long long int ni=abs(g-111111111);
        if(ni%11111111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }
    else if(c==10)
    {
        long long int ten=abs(g-1111111111);
        if(ten%111111111==0)
        {
            return true;

        }
        else
        {
            return false;

        }
    }

}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(posible(n))
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
