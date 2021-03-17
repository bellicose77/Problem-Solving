#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int c=0;
    cin>>a>>b;
    while(1)
    {
        if(a>b)
        {
            cout<<c<<endl;
            break;
        }
        else
        {
            a*=3;
            b*=2;
            c++;
        }
    }
    return 0;
}
