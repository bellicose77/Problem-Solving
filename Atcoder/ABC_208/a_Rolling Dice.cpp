#include<bits/stdc++.h>
using namespace std;
bool dice(int a,int b)
{
    int x=a*6;

    if(a<=b && b<=x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(dice(a,b))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
