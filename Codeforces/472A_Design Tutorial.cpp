#include<bits/stdc++.h>
using namespace std;
/*
 another way
  if(n%2==0)
  {
    cout<<n-8<<" "<<8<<endl;
  }
  else if(n%2!=0)
  {
   cout<<n-9<<" "<<9<<endl;
  }
*/
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=4;i<n;i++)
    {
        if(i%2==0 || i%3==0)
        {
            v.push_back(i);

        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<=v.size();j++)
        {

            int x=v[i]+v[j+i+1];

            if(n==x)
            {
                cout<<v[i]<<" "<<v[j+i+1]<<endl;
                return 0;
            }
        }

    }
    return 0;
}
