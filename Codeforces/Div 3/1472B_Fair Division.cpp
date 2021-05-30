/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;

    while(t--)
    {
        vector<int>v;
        int o=0,to=0;

        cin>>n;
        while(n--)
        {

            cin>>x;
            v.push_back(x);

        }
        for(int i=0; i<v.size(); i++)
        {

            if(v[i]==1)
            {
                o++;
            }
            if(v[i]==2)
            {
                to++;
            }
        }
        if(o%2==0 && to%2==0)
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
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int o=0,to=0;
        int sum=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(x==1)
            {
                o++;
            }
            if(x==2)
            {
                to++;
            }
        }
        if(n==2)
        {
            if(o==2)
            {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else if(n>2)
        {
            if(n%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else if(n%2==0)
            {
                if(o==to)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}
 this all code was about a couple of month ago(28/03/21)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,e,o,x;
    cin>>t;
    while(t--)
    {
        o=0,e=0;
        cin>>n;
        int j=n;
        while(n--)
        {
            cin>>x;
            if(x==1)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        if(j%2!=0)
        {
            if( (o!=0)&&(o%2==0))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(o%2==0 || e%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}



