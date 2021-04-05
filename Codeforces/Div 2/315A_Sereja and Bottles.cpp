#include<bits/stdc++.h>
/*
 code idea
for(int j = 0; j < N; j++) {
        if(i != j and A[i] == B[j]) {
          cnt++;
          break;
        }
      }
    }
    cout << N - cnt << '\n';
    */
using namespace std;
int main()
{
   int n,a,b,c=0;
   cin>>n;
   vector<pair<int,int>>v;
   bool flag=false;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       v.push_back(make_pair(a,b));
   }
   for(int i=0;i<n;i++)
   {
       flag=false;
       for(int j=0;j<n;j++)
       {
           if(i==j)
           {continue;}
           if(v[i].first==v[j].second)
           {
               flag=true;
               break;
           }
       }
       if(!(flag))
       {
           c++;
       }
   }
   cout<<c<<endl;
    return 0;
}

