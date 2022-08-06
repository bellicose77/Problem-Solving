#include<bits/stdc++.h>
using namespace std;
int solve(int n,int h,int m)
{
    int x,y;
    if(h>12){
        int H = h-24;
    }
    while(n--){
        cin>>x>>y;
        if(x>12){
            dif = x-12;
        }
    }


}
int main ()
{
    int t,n,h,m;
    cin>>t;
    while(t--){
            cin>>n>>h>>m;
        int result = solve(n,h,m);
        cout<<result<<endl;
    }
    return 0;
}
