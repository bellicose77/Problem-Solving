#include<bits/stdc++.h>
using namespace std;
int pockets(vector<int>v)
{
    if(v.size()==1)
    {
        return 1;
    }
    else
    {
        vector<int>nu;
    for(int i=0;i<v.size()-1;i++)
    {

        int c=1;
        for(int j=0;j<v.size();j++)
        {
            if(v[i]==v[i+j+1])
            {
                c++;
            }
        }
        nu.push_back(c);
    }
    return (*max_element(nu.begin(),nu.end()));


    }


}
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
    int u=pockets(v);
    cout<<u<<endl;
    return 0;
}
