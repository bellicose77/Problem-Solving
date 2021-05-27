/* Time limit exced but it's correct
#include<bits/stdc++.h>
using namespace std;
bool same(long long int i)
{
    int d;
    vector<int>v;
    while(i!=0)
    {
        d=i%10;
        v.push_back(d);
        i/=10;
    }
    if(v.size()==1)
    {
        return true;
    }
    else
    {
        int flag=0;
        sort(v.begin(),v.end());
        for(int i=0; i<v.size()-1; i++)
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

}
int same_digit(long long int n)
{
    int c=0,d;
    for(long long int i=1; i<=n; i++)
    {
        if(same(i))
        {
            c++;
        }
    }
    return c;
}
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int num=same_digit(n);
        cout<<num<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    cin>>t;
    while(t--)
    {
        long long int c=0;
        cin>>n;
        for(long long int i=1;i<=9;i++)
        {
            for(long long int j=i;j<=n;)
            {
                c++;
                j=(j*10)+i;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}









