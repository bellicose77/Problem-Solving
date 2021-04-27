#include<bits/stdc++.h>
using namespace std;
void EvenArray(int n)
{
    int e=0,o=0,f=0,x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(v[i]%2==0)
            {
                f++;
            }
            else
            {
                e++;
            }
        }
        else
        {
            if(v[i]%2!=0)
            {
                f++;
            }
            else
            {
                o++;
            }
        }
    }
    if(f==n)
    {
        cout<<0<<endl;
    }
    else if(o==e)
    {
        cout<<e<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
/*
void EvenArray(int n)
{
    int temp,x,c=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    if(n==1)
    {
        cout<<-1<<endl;
    }
    else
    {
         for(int i=0;i<n;i++)
    {
        if((v[i]%2)==(i%2))
        {
            continue;

        }
        else
        {
            c++;
            temp=v[i+1];
            v[i+1]=v[i];
            v[i]=temp;
        }

    }
    cout<<c<<endl;
    }

}
*/
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        EvenArray(n);
    }
    return 0;
}
