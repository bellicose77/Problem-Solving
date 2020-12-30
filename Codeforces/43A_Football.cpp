#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[0]==arr[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    cout<<"ah"<<n-c<<endl;
    return 0;
}
