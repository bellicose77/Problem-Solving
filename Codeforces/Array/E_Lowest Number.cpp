#include<bits/stdc++.h>
using namespace std;
void lowest(vector<int>v)
{
    int x,i;
    int temp=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<temp)
        {
            temp=v[i];
            x=i;
        }
    }
    printf("%d %d\n",temp,x+1);
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    lowest(v);
    return 0;
}
