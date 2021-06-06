#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector<vector<int>>v;
    for(int i=0; i<3; i++)
    {

        vector<int>temp;
        for(int j=0; j<5; j++)
        {
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    /*
    // Display vector of vectors
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // Display vector of vectors using iterator;
    for(int i=0;i<v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
