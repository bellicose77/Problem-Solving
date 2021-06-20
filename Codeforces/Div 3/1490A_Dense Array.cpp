#include<bits/stdc++.h>
using namespace std;
/* other person code
    for(i=0;i<n-1;i++)
        {
            mx=max(vec1[i],vec1[i+1]);
            mn=min(vec1[i],vec1[i+1]);
            while(mn*2<mx)
            {
                cnt++;
                mn*=2;
            }
        }
  */
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,u;
        vector<int>v;
        cin>>x;
        while(x--)
        {

            cin>>u;
            v.push_back(u);
        }
        int c=0;
        for(int i=0; i<v.size()-1; i++)
        {
            int f=v[i];
            int s=v[i+1];
            for(int j=min(f,s);j<=max(f,s);)
            {

                int dou=j*2;
                if(dou<max(f,s))
                {
                    c++;
                }
                j=dou;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
