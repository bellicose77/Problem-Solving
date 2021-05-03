/*
#include<bits/stdc++.h>
using namespace std;
int distinct_year(int n)
{
    int x;
    vector<int>v;
    while(n!=0)
    {
        x=n%10;
        v.push_back(x);
        n/=10;
    }
    int flag=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
        {
           flag=1;
           break;
        }
    }
    if(flag==0)
    {
        int c=v[0]*1+v[1]*10+v[2]*100+v[3]*1000;
        return c;
    }
    else if(flag==1)
    {
        v.clear();
        return n;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<=9000;i++)
    {
        int x=distinct_year(i);
        if(x!=0)
        {
            cout<<x<<endl;
            break;
        }
    }
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<=9000;i++)
    {
        string s;
        stringstream ss;
        ss<<i;
        ss>>s;
        int flag=0;
        for(int j=0;j<s.size()-1;j++)
        {
            if(s[j]==s[j+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<s<<endl;
            break;
        }
    }
    return 0;
}

