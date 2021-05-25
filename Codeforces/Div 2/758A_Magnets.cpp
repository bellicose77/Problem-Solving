#include<bits/stdc++.h>
using namespace std;
int magnet(vector<string>v)
{
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1])
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    string x;
    vector<string>v;

    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    int no=magnet(v);
    cout<<no<<endl;
    return 0;
}
