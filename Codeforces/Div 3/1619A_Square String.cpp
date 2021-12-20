#include<bits/stdc++.h>
using namespace std;
void square_string(){
    string s;
    cin>>s;
    int x = s.size();
    int u =x/2;
     int flag=0;
    if(x%2==1){
        cout<<"NO"<<endl;
    }

    else{
        for(int i=0;i<u;i++){
            if(s[i]!=s[u+i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else if(flag==1){
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        square_string();
    }
}
