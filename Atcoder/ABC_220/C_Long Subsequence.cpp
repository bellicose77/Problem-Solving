#include<bits/stdc++.h>
using namespace std;
void long_sequence(long long int sum,long long int x,int t){
  long long  f = x / (sum*1.0);
  long long res = f*t;
  //cout<<res<<endl;
  cout<<ceil(res)<<endl;

}
int main(){
    int n,a;
    cin>>n;
    int sum=0;
    int t=n;
    while(n--){
        cin>>a;
        sum+=a;
    }
    long long int x;
    cin>>x;
    long_sequence(sum,x,t);

return 0;
}
