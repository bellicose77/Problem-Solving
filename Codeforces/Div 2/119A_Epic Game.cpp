/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(n%2!=0)
    {
        cout<<0<<endl;
    }
    else
    {
        if(a==b)
        {
            if((a%2==0) && (b%2==0))
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            if((a%2==0) && (b%2==0))
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }

    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((c%a==0) &&(c%b)==0)
    {
        cout<<1<<endl;
    }
    else if((c%a==0) && (c%b!=0))
    {
        cout<<0<<endl;
    }
    return 0;
}
*/
/*
while(n>0)
    {
        if(count%2==0)
        {
        	antisimon++;
        	n=n-(__gcd(b,n));
        	count++;
        }
        else
        {
        	simon++;
        	n=n-(__gcd(a,n));
        	count++;
        }
    }
    if(simon > antisimon)
    {
    	cout<<0<<endl;
    	return;
    }
    else
    {
    	cout<<1<<endl;
    }

 */
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        gcd(b,a%b);
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(1)
    {
        int x=gcd(a,c);
        c=c-x;
        if(c==0)
        {
            cout<<0<<endl;
            break;
        }
        x=gcd(b,c);
        c=c-x;
        if(c==0)
        {
            cout<<1<<endl;
            break;
        }

    }

    return 0;
}
