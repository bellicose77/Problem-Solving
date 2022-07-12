#include<bits/stdc++.h>
using namespace std;
void solution(string s){
transform(s.begin(), s.end(), s.begin(), ::tolower);
if(s=="yes")
    {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solution(s);
    }
    return 0;

}
