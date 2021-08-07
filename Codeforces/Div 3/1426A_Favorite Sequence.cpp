#include<bits/stdc++.h>
using namespace std;
void sequence(int n)
{
    vector<long long int>v;
    long long int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    long long int i=1,j=n-1;
    long long int h=j;
    cout<<v[0]<<" ";
    if(j%2==0)
    {
        while(i<j)
        {
            cout<<v[j]<<" ";
            cout<<v[i]<<" ";
            j--;
            i++;
        }
        cout<<endl;

    }
    else
    {
        while(i<j)
        {
            cout<<v[j]<<" ";
            cout<<v[i]<<" ";
            j--;
            i++;
        }
        //int u = ceil(h/(2*1.0));
        //cout<<"o :"<<u<<endl;
        cout<<v[ceil(h/(2*1.0))]<<" ";
        cout<<endl;
    }

}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sequence(n);
    }
    return 0;
}
