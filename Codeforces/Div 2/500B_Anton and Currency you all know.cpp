/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int num=n;
    vector<int>v;
    int c=0;
    while(n!=0)
    {
        int x=n%10;
        if(x%2==0)
        {
            c++;
        }
        v.push_back(x);
        n/=10;
    }
    if(num%2==0)
    {
        cout<<num<<endl;
    }
    else if(c==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        reverse(v.begin(),v.end());
        int y=v.size();
        int temp,in,sw;
        for(int i=0; i<v.size()-1; i++)
        {

            if(v[i]%2==0)
            {
                if(v[i]<v[y-1])
                {
                    temp=v[y-1];
                    v[y-1]=v[i];
                    v[i]=temp;
                    break;

                }
                else
                {

                }
            }
        }
        int uu=v[y-1];
        v[y-1]=sw;
        v[in]=uu;


        for(auto p:v)
        {
            cout<<p;
        }
        cout<<endl;

    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string s;
    while(t--)
    {
        cin>>s;
        int flag=0;
        for(int i=0;i<=s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-(i+1) ])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        cout<<s<<endl;
    }
    /*
    for(int i=0;i<s.size();i++)
    {
        cout<<int(s[i]-'0')<<endl;
    }
    */

    return 0;
}
