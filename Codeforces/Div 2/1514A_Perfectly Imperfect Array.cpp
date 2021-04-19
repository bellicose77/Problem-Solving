#include<bits/stdc++.h>
using namespace std;
void Imperfect()
{
    int t,x;
    cin>>t;
    vector<int>d;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        d.push_back(x);
    }
    int flag=0;
    for(int i=0;i<d.size();i++)
    {
        double c=sqrt(d[i]);
        int b=d[i]/c;
        if(c!=b)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Imperfect();

    }

    return 0;
}
