#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int x,y;
    int sx=0,sy=0;
    int ex=0,ey=0;
    int sum=0;
    int finalsum;
    while(n--){
        cin>>x>>y;
        int xsum=abs((x-(sx)));
        //cout<<"xsum:"<<xsum<<endl;
        int ysum = abs(y-(sy));
        //cout<<"ysum:"<<ysum<<endl;
        int yyy = (xsum+ysum);
        sum=sum+yyy;
        //int finalsum=sum;
       // cout<<"sum:loop: "<<sum<<endl;
        sx=x;
        sy=y;
        //cout<<sum<<endl;
    }
    //cout<<"sum:"<<sum<<endl;
    int enxsum = abs(sx-(ex));
    int enysum = abs(sy-(ey));
    int ysum = enxsum+enysum;

    int cc=sum+ysum;
    return cc;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int result = solve(n);
        cout<<result<<endl;
    }
return 0;
}
