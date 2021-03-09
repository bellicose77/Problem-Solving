#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int y=(2*row)-1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(j>=i && j<=(y+1)-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
