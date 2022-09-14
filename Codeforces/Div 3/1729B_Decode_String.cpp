#include<bits/stdc++.h>
using namespace std;
/*

void decode(string s,int n){
    //string ss ={"abcdefghijklmnopqrstuvwxyz"};
    string ss ="";
    for(int i=0;i<n;i++){

      if(s[i]!='0'){
        if(s[i+2]=='0' && s[i+3]!='0'){

                string s1 = {s[i]};
                string s2 = {s[i+1]};
                string newS = s1+s2;
                int xx = stoi(newS);
                //cout<<s1<<" "<<s2<<":"<<newS<<":"<<xx<<endl;
                cout<<ss[xx-1];
                i+=2;


                int num = ((s[i]-'0')*10)+(s[i+1]-'0');
                ss.push_back((char)(96+num));
                //cout<<num<<endl;
                i+=2;


        }

        else if(s[i+2]=='0' && s[i+3]=='0'){

            string s4 = {s[i]};
            int fff = stoi(s4);
            string s5 = {s[i+1]};
            string s6 = {s[i+2]};
            string newSS = s5+s6;
            int xxxx = stoi(newSS);
            cout<<ss[fff-1]<<ss[xxxx-1];


            int num = ((s[i+1]-'0')*10)+(s[i+2]-'0');
            ss.push_back((char)(96+num));
                i+=3;
        }
         else{

                string s3 ={s[i]};
                int xxx = stoi(s3);
                cout<<ss[xxx-1];


                int num = (s[i]-'0');
               ss.push_back((char)(96+num));
      }

      }

    }
    cout<<ss<<endl;

}
*/

void decode(string s,int n){
    string ss ="";
    for(int i=0;i<n;i++){
        if((i+2<n && s[i+2]=='0') && (i+3>=n || s[i+3]!='0') ){
             int num = ((s[i]-'0')*10)+(s[i+1]-'0');
                ss.push_back((char)(96+num));
                //cout<<num<<endl;
                i+=2;
        }
        else{
          int num = (s[i]-'0');
           ss.push_back((char)(96+num));
        }
    }
    cout<<ss<<endl;
}


int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        decode(s,n);
    }
return 0;
}
