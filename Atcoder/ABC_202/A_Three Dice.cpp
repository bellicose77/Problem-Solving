#include<bits/stdc++.h>
using namespace std;
int three_dice(int a,int b,int c)
{
    int sum;
     sum=(7-a)+(7-b)+(7-c);
    return sum;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res=three_dice(a,b,c);
    cout<<res<<endl;
    return 0;
}
