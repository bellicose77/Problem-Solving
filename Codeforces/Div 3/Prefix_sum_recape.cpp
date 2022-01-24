#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,l,r;
   cin>>n;
   int a[n+2];
   int p[n+2];
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   p[0]=0;
   cin>>l>>r;
   for(int i=1;i<=n;i++){
        p[i]=p[i-1]+a[i];

   }

    cout<<p[r]-p[l-1]<<endl;
   return 0;
}
