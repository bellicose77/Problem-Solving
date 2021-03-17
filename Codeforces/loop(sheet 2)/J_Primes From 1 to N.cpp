#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<int>::iterator it;
    if(n==2)
    {
        cout<<n<<endl;
    }
    else
    {
         for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            v.push_back(i);
        }
    }
    for(it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    }

    return 0;
}
