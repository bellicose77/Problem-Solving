#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    while(cin>>n>>m)
    {
         int sum=0;

        if(n<1 || m<1)
        {
            break;
        }
        else
        {
            if(n>=m)
            {
                for(int i=m; i<=n; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
                cout<<"sum ="<<sum<<endl;

            }
            else{
                for(int i=n; i<=m; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
                cout<<"sum ="<<sum<<endl;
            }


        }
    }

    return 0;
}
