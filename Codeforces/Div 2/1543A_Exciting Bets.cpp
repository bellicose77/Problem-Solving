#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int diff=abs(a-b);
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long int x = a%diff;
        long long int y = b%diff;
        if(x!=y)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            cout<<diff<<" "<<min(x,diff-y)<<endl;


        }

    }
    return 0;
}
