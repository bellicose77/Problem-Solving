#include<bits/stdc++.h>
using namespace std;
int GCD(int n,int x)
{
    int cd;
    for(int i=1; i<=min(n,x); i++)
    {
        if((n%i==0) && (x%i==0))
        {
         cd=i;

        }
    }
    return cd;

}
int main()
{
    int n,x;
    cin>>n>>x;
    int big=GCD(n,x);
    cout<<big<<endl;
    return 0;
}
