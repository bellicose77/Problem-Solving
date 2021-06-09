#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,vf,vs,tf,ts;
    cin>>s>>vf>>vs>>tf>>ts;
    int fast=s*vf+(tf*2);
    int seco=s*vs+(ts*2);
    if(fast>seco)
    {
        cout<<"Second"<<endl;
    }
    else if(seco>fast)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<< "Friendship"<<endl;
    }
    return 0;
}
