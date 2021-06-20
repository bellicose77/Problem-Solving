/*
#include<bits/stdc++.h>
using namespace std;
bool lucky(int n)
{
    int x,se=0,fo=0;
    vector<int>v;
    while(n!=0)
    {
        int x=n%10;
        if(x==7)
        {
            se++;
        }
        else if(x==4)
        {
            fo++;
        }
        v.push_back(x);
        n/=10;
    }
    int flag=0;
    for(int i=0;i<v.size();i++)
    {
        if(((v[i]!=7) || (v[i]!=4)) )
        {
            flag=1;
            break;
        }
    }
    cout<<se<<" "<<fo<<endl;
    cout<<flag<<endl;
    if(flag==0)
    {
        cout<<"XZ<<"<<endl;
        if((se%2==0) && (fo%2==0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(flag==1)
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    if(lucky(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
    string s;
    cin>>s;
    int fo=0,se=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4')
        {
            fo++;
        }
        else if(s[i]=='7')
        {
            se++;
        }
    }
    if((fo+se)==n)
    {
        if((fo%2==0) && (se%2==0))
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
        cout<<"NO"<<endl;
    }
}
