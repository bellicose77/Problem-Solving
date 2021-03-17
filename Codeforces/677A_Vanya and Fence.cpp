#include<bits/stdc++.h>
using namespace std;

int width(int n,int h)
{
    int x,sum=0;
   for(int i=1;i<=n;i++)
   {

       cin>>x;
       if(x<=h)
       {
           sum+=1;

       }
       else
       {
           sum+=2;
       }
   }
   return sum;
}
int main()
{
    int n,h,x;
    cin>>n>>h;
    int total=width(n,h);
    cout<<total<<endl;
    return 0;
}
