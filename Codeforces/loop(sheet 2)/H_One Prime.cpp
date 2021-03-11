#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    int flag=0;
    if(n==2)
    {
        cout<<"YES"<<endl;
    }
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}
