#include<bits/stdc++.h>
using namespace std;
/*
void fibbo(int n)
{
    int x=0;
    int y=1;
    int sum=x+y;
    cout<<x<<" "<<y<<" ";
    for(int i =3;i<=n;i++)
    {
       cout<<sum<<" ";
       x=y;
       y=sum;
       sum=x+y;

    }
    cout<<endl;
}
*/
int fibbo_recursion(int n)
{
    if(n<=1)
    {
        return n;
    }
   return fibbo_recursion(n-1) + fibbo_recursion(n-2);
}
int main()
{
    int t,n ;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=0;
        for(int i=1;i<=n;i++)
        {
            cout<<fibbo_recursion(x)<<" ";
            x++;

        }
        cout<<endl;


    }
    return 0;
}
