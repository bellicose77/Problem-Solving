#include<bits/stdc++.h>
using namespace std;
/*
for(int i=1;i<=200;i++){
        if(i%b==0)a++;
        a--;
        if(a==0){cout<<i;break;}
    }
*/
int days(int n,int m)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n--;
        if(c%m==0)
        {
            n++;
        }
    }
    return c;

}
int main()
{
    int n,m;
    cin>>n>>m;
    int x=days(n,m);
    cout<<x<<endl;
    return 0;
}
