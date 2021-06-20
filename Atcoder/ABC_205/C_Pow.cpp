/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int f=(int)(pow(a,c)+0.5);
    long long int s=(int)(pow(b,c)+0.5);
    if(f==s)
    {
       cout<<"="<<endl;
    }
    else if(f>s)
    {
        cout<<">"<<endl;
    }
    else
    {
        cout<<"<"<<endl;
    }

    return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;
void greater_power(long long int a,long long int b,long long int c)
{
    int x,y;
    if(a==b)
    {
        cout<<"="<<endl;
    }
    else if(a>=0 && b>=0)
    {
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }
    else if(a<0 && b<0)
    {

        if(c%2==0)
        {
            if(a<b)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
        else
        {
            if(a<b)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
    }
    else
    {
        if(c%2==0)
        {
            x=abs(a);
            y=abs(b);
            if(x==y)
            {
                cout<<"="<<endl;
            }
            else if(x>y)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }

        else
        {

            if(a>b)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
    }
}
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    greater_power(a,b,c);
    return 0;
}
