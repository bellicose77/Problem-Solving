#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k)
{
    long long int x;
     vector<long long int>v;
   while(n--)
        {
            cin>>x;
           v.push_back(x);

        }
        vector<int>ind;
        long long int c=0;
        for(long long int i=0;i<v.size();i++)
        {
            if(v[i]%2!=0)
            {
                c++;
                ind.push_back(i+1);
            }
        }
        if(c<k)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if((c-k+1)%2==0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto it:ind)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

}
int main()
{
    long long int q,n,k,x;
    cin>>q;
    while(q--)
    {

        cin>>n>>k;
        solve(n,k);

    }
    return 0;
}
