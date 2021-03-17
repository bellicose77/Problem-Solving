#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,o;
    int c=0,p=0;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=1)
        {
            p+=v[i];
        }
        else if(v[i]==-1)
        {
            o=p+(-1);

            if(o<0)
            {
                cout<<"crime"<<endl;
                c++;
            }

        }
           p=p+(-1);
    }
    cout<<c<<endl;
    return 0;
}
