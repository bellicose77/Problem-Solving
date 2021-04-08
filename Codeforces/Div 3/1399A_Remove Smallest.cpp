#include<bits/stdc++.h>
using namespace std;
/*
  other person codes
   for(i=1;i<n;i++){
        if(a[i]-a[i-1]>1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

    and another one
    bool check = true;
    for(int i = 0; i < n-1; i++){
              if(v[i+1] - v[i]  > 1){
                        check = false;
                        break;
              }
    }
    if(!check) cout << "NO" << endl;
    else cout << "YES" << endl;
*/
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int c=0;
        vector<int>v;
        vector<int>::iterator it;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
                v[i]=0;
            }
            else
            {
                int y=abs(v[i]-v[i+1]);
                if(y==1)
                {
                    v[i]=0;
                }

            }
        }
        for(it=v.begin();it!=v.end();it++)
        {
            if(*it>0)
            {
                c++;
            }
        }
        if(c==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
