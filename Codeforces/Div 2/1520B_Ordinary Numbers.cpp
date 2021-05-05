#include<bits/stdc++.h>
using namespace std;
bool isordinary(long long int x)
{
    int y;
    vector<int>v;
    while(x!=0)
    {
        y=x%10;
        v.push_back(y);
        x/=10;
    }
    int flag=1;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return true;
    }
    else if(flag==1)
    {
        return false;
    }
}
int  same_digit_number(long long int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(isordinary(i))
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int num=same_digit_number(n);
        cout<<num<<endl;

    }
    return 0;
}
