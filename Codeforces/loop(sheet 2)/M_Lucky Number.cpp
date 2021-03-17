#include<bits/stdc++.h>
using namespace std;
bool luckynumber(int a)
{
  while(a)
  {
      int x=a%10;
      a/=10;
      if(x==4 || x==7)
      {
          continue;
      }
      else
      {
          return false;
      }


  }
  return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>v;
    vector<int>::iterator it;
    for(int i=a;i<=b;i++)
    {
        int x=luckynumber(i);
        if(x==1)
        {
           v.push_back(i);
        }

    }
    if(v.size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(it =v.begin();it<v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}
