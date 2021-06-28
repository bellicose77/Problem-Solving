#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int h=v.size();
    int sum=1;
    for(int i=0;i<v.size();i++)
    {
        if(i<h-1)
        {
            sum+=v[i];
            if(v[i]>v[i+1])
            {
              sum+=2;
            }
            else
            {
                sum+=1;
            }
        }
        else
        {
            sum+=v[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
