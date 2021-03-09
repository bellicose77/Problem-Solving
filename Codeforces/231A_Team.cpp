#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    vector<int>v(n);
    for(int j=0; j<n; j++)
    {
        int c=0;
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<3; i++)
        {
            if(v[i]==1)
            {
                c++;
            }

        }

        if(c>=2)
        {
            x=x+1;
        }

    }
    cout<<x<<endl;

return 0;
}



