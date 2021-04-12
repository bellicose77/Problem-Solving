#include<bits/stdc++.h>
using namespace std;
void spy()
{
    int n;
    cin>>n;
    int x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
        if((v[0]!=v[1]) && (v[1]==v[2]))
        {
            cout<<1<<endl;
        }
        else
        {
            int y=v[0];
            for(int i=0;i<v.size()-1;i++)
            {
                if(y!=v[i+1])
                {
                    cout<<i+2<<endl;
                    break;
                }
            }
        }
    }

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {

        spy();

    }
    return 0;
}
