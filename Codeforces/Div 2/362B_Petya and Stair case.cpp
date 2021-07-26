#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,x;
    cin>>n>>m;
    int u=m;
    vector<int>v;
    if(m==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        while(m--)
        {
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());
        //cout<<v[y-1]<<endl;

        if(v[0]==1 || v[u-1]==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int flag=0;
            for(int i=0; i<u-2; i++)
            {
                if(v[i+2]==v[i]+2)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
            }
            else if(flag==1)
            {
                cout<<"NO"<<endl;
            }

        }


    }

    return 0;
}
