#include<bits/stdc++.h>
using namespace std;
void carry(){
  long long int n;
  cin>>n;
  string s;
  s= to_string(n);
  string even;
  string odd;
  if(s.size()==1){
    even+=s;
  }
  else{
    for(int i=0;i<s.size();i+=2){
    even+=s[i];
    odd+=s[i+1];
  }
  }

  int e,o;
  e= stoi(even);
  e+=1;
  if(odd.size()!=0){
    o=stoi(odd);
    o+=1;
  }
  else{
    o=1;
  }

  int res = e*o-2;
  cout<<res<<endl;
}
int main(){

  int t;
  cin>>t;
  while(t--){
    carry();
  }
  return 0;
}
