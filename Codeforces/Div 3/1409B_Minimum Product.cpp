#include<bits/stdc++.h>
using namespace std;
void product()
{
    long long int a,b,x,y,k,v,u,fir,sec;
    cin>>a>>b>>x>>y>>k;
    v=a-x;
    u=b-y;
    fir=((a- min(v,k))*(b-min(u,max(k-v,0LL))));
    sec=((a-min(v,max(k-u,0LL)))*(b-min(u,k)));
    cout<<min(fir,sec)<<endl;

}
int main()
{
    int t;

   cin>>t;
   while(t--)
   {
       product();
   }


    return 0;
}
