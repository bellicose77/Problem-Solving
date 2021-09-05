#include<bits/stdc++.h>
using namespace std;
void prime_square(int n)
{
    int arr[110][110];
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
        arr[i][i+1]=1;
    }
    arr[n-1][0]=1;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        prime_square(n);
    }


    return 0;
}


