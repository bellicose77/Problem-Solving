#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    int x=12;
    cin>>k;
    vector<int>v;
    while(x--)
    {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end(),greater<int>());
    int c=0,sum=0;
 if(k==0)
 {
     cout<<0<<endl;
 }
 else
 {
      vector<int>p;
  for(int i=0;i<v.size();i++)
  {
      for(int j=i;j<=i;j++)
      {
          sum+=v[j];
          p.push_back(sum);
      }
  }
  int flag=0,f;
  for(int i=0;i<p.size();i++)
  {
      if(p[i]>=k)
      {
          f=i;
          flag=1;
          break;
      }
  }
  if(flag==0)
  {
      cout<<-1<<endl;
  }
  else if(flag==1)
  {
      cout<<f+1<<endl;
  }

 }

  /*
  for(int i=0;i<p.size();i++)
  {
      cout<<p[i]<<" ";
  }
  cout<<endl;
  */

    return 0;
}
