#include<bits/stdc++.h>
using namespace std;
void elevators(int a,int b,int c){
    long long int second;
   long long int first = abs(a-1);
if(a==1){
    cout<<1<<endl;
}
else{
    if(c==1){
        second = abs(b-1);
        if(first<second){
            cout<<1<<endl;
        }
        else if(first>second){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    else{
      second = abs(b-c)+(c-1);
      if(first<second){
            cout<<1<<endl;
        }
        else if(first>second){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }

    }
}
}
int main(){
   int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        elevators(a,b,c);
    }
return 0;
}
