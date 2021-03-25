#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x,y,z;
    long long int c=0;
    cin>>a>>b;
    cin>>x>>y>>z;
    long long int yellow=a-((x*2)+(y*1));
    long long int blue=b-((y*1)+(z*3));
    if(yellow>=0 && blue>=0)
    {
        cout<<0<<endl;
    }
    else
    {
        if(yellow<0)
        {
            c=c+abs(yellow);
        }
        if(blue<0)
        {
            c=c+abs(blue);
        }
          cout<<c<<endl;
    }


    return 0;
}
