#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int flag=0;



   for(int i=0;i<=a.length();i=i+2){

        if(int(a[i])>=65 && int(a[i])<=90){

            flag+=1;
            break;
        }
        else if(i<=a.length()){
             if(int(a[i+1])>=97 && int(a[i+1])<=122){
                    flag+=1;
                    break;

            }
        }
   }

        if(flag==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }



    return 0;
}
