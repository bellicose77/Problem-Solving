#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
     set<int>s;
    while(t--)
    {

        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            s.erase(x);
        }
        else if(y==3)
        {
            set<int>::iterator it=s.find(x);
            if(it==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }


        }
    }

    return 0;
}
