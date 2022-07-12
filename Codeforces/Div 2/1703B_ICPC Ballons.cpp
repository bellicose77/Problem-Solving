#include<bits/stdc++.h>
using namespace std;
void solution(string s){
set<int> s1;
for(int i=0;i<s.size();i++){
    s1.insert(s[i]);
}
int diff = s.size()-s1.size();
int result = diff+(s1.size()*2);
cout<<result<<endl;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<2<<endl;
        }
        else{
            solution(s);
        }
    }
return 0;
}
