#include<bits/stdc++.h>
using namespace std;
int candles(int a,int b)
{
    int sum=0;
    sum+=a;
    while(a!=0)
    {
        if(a%b==0)
        {
            sum+=a/b;
        }
        a=a/b;
    }
    return sum;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int num=candles(a,b);
    cout<<num<<endl;
    return 0;
}
