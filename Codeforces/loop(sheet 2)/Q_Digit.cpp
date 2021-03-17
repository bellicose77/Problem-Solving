#include<bits/stdc++.h>
using namespace std;
void digit(int n)
{
    vector<int>v;
    vector<int>::iterator it;
    if(n==0)
    {
        cout<<n<<endl;
    }
    else
    {
        while(n>0)
        {
            int x=n%10;
            v.push_back(x);
            n/=10;
        }
        for(it=v.begin();it<v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        digit(x);
    }
    return 0;
}

