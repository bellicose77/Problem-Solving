#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nu,x;
    int e=0,o=0,p=0,n=0;
    cin>>nu;
    while(nu--)
    {
        cin>>x;
        if(x==0)
        {
            e++;
        }
        else
        {
            if(x%2==0 && x>=1)
            {
                e++;
                p++;
            }
            else if(x%2==0 && x<=-1)
            {
                e++;
                n++;
            }
            else if(x%2!=0 && x>=1)
            {
                o++;
                p++;
            }
            else if(x%2!=0 && x<=-1)
            {
                o++;
                n++;
            }

        }

    }
    cout<<"Even:"<<" "<<e<<endl;
    cout<<"Odd:"<<" "<<o<<endl;
    cout<<"Positive:"<<" "<<p<<endl;
    cout<<"Negative:"<<" "<<n<<endl;

    return 0;
}
