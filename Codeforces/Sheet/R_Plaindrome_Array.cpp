#include<bits/stdc++.h>
using namespace std;
int plaindrome(vector<long long int>v,int x,int y)
{

    if(x>=y)
    {
     return 1;
    }
    else if(v[x]==v[y])
    {
        return plaindrome(v,x+1,y-1);

    }

}
int main()
{
    int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int f=v.size();
    int x=0;
    int y=f-1;
    if(plaindrome(v,x,y)==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
