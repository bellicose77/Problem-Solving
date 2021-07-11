#include<bits/stdc++.h>
using namespace std;
void shortest()
{

    int ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    if((ax==bx) &&(ax==cx))
    {
        if(cy>=ay && cy<=by)
        {
            cout<<abs(ay-by)+2<<endl;
        }
        else if((cy<=ay) && (cy>=by))
        {
            cout<<abs(ay-by)+2<<endl;
        }
        else
        {
            cout<<abs(ay-by)<<endl;
        }
    }
    else if((ay==by) &&(ay==cy))
    {
       if(cx>=ax && cx<=bx)
       {
           cout<<abs(ax-bx)+2<<endl;
       }
       else if(cx<=ax && cx>=bx)
       {
           cout<<abs(ax-bx)+2<<endl;
       }
       else
       {
           cout<<abs(ax-bx)<<endl;
       }
    }
    else
    {
       int dax=abs(ax-bx);
       int dbx=abs(ay-by);
       cout<<dax+dbx<<endl;
    }
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        shortest();
    }
    return  0;
}
