#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,v;
    cin>>x;
    if(x%100==0)
    {
        cout<<100<<endl;
    }
    else
    {
        y=x%100;
        v=100-y;
        cout<<v<<endl;
    }
    return 0;
}
