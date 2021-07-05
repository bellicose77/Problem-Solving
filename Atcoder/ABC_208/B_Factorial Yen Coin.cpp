#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
int main()
{
    int p;
    cin>>p;
    vector<int>v;
   for(int i=1;i<=12;i++)
   {
       v.push_back(fact(i));
   }
   sort(v.begin(),v.end(),greater<int>());
   int ans=0;
   for(int i=0;i<v.size();i++)
   {
       if(p<v[i])
       {
          continue;
       }
       else
       {
         ans+=p/v[i];
         p%=v[i];
       }
   }
   cout<<ans<<endl;
    return 0;
}
