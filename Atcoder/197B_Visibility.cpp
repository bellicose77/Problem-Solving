#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    x--;
    y--;
    vector<string>v(h);
    for(int i=0;i<h;i++)
    {
        cin>>v[i];
    }
    int total=0;
    for(int i=y;i<w;i++)
    {
        if(v[x][i]=='.')
        {
            total++;
        }
        else
        {
            break;
        }
    }
    for(int i=y;i>=0;i--)
    {
        if(v[x][i]=='.')
        {
            total++;
        }
        else
            break;
    }
    for(int i=x;i>=0;i--)
    {
        if(v[i][y]=='.')
        {
            total++;
        }
        else
            break;
    }
    for(int i=x;i<h;i++)
    {
        if(v[i][y]=='.')
        {
            total++;
        }
        else
            break;
    }
    cout<<total-3<<endl;
    return 0;
}
