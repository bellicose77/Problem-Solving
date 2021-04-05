#include<bits/stdc++.h>
using namespace std;

/*
 other logic
  for(int i=2;i<=n;i++)
  {
   cout<<i<<" ";
  }
  cout<<1<<endl;


   another one
   for(i=1;i<=n;i++)
    {
        if(i==n) cout << 1 << " ";
        else cout << i+1 << " ";
    }

    #another one
     int arr[n];arr[0]=n;
        for(int i=1;i<n;i++){
            arr[i]=i;
        }
  */
int main()
{
    int t,n,temp=0;
    cin>>t;

    while(t--)
    {
    vector<int>v;
    vector<int>::iterator it;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            v.push_back(i+1);
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i] < v[i+1])
            {
                temp=v[i+1];
                v[i+1]=v[i];
                v[i]=temp;
            }
        }
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }

        cout<<endl;

    }
    return 0;
}
