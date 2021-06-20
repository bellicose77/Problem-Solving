#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    string s;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='.')
            {
                if((arr[i][j+1]=='R') || (arr[i-1][j]=='R') || (arr[i][j-1]=='R') || (arr[i+1][j]=='R'))
                {
                    arr[i][j]='W';
                    cout<<"R:"<<i<<j<<" :"<<arr[i][j]<<endl;
                }
            }
            if(arr[i][j]=='.')
            {
                if((arr[i][j+1]=='W') || (arr[i-1][j]=='W') || (arr[i][j-1]=='W') || (arr[i+1][j]=='W'))
                {
                    arr[i][j]='R';
                     cout<<"W:"<<i<<j<<" :"<<arr[i][j]<<endl;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<i<<j<<" :"<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[1][-1]<<endl;
   return 0;
}

