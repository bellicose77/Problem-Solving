#include<bits/stdc++.h>
using namespace std;
int tallest(vector<int>v)
{
   int x=*max_element(v.begin(),v.end());
   int c=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]==x)
       {
           c++;
       }
   }
   return c;

}
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int g=tallest(v);
    cout<<g<<endl;
    return 0;
}
