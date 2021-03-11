#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,num;
    cin>>n;
    int flag=0;
    vector<int>v;
    vector<int>::iterator it;
    while(n!=0)
    {
        x=n%10;
        v.push_back(x);
        n=n/10;
    }
    int u=v.size();
    for(int i=0; i<v.size()/2; i++)
    {
        if(v[i]!=v[u-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(it =v.begin(); it<v.end(); it++)
        {
            cout<<*it;
        }
        cout<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        if(v[0]==0)
        {
            int y=-1;
            for(int i=0; i<u; i++)
            {
                if(v[i]!=0)
                {
                    y=i;
                    break;
                }
            }
            num=u-y;
            for(int i=0; i<u-y; i++)
            {
                v[i]=v[y+i];
            }


            for(int i=0; i<num; i++)
            {
                cout<<v[i];



            }
            cout<<endl;
            cout<<"NO";
        }
        else
        {
            for(it =v.begin();it<v.end();it++)
            {
                cout<<*it;
            }
            cout<<endl;
            cout<<"NO"<<endl;
        }

    }






    return 0;
}
