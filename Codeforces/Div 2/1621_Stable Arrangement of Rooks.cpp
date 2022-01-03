#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n==1 && k==1){
            cout<<"R"<<endl;
        }
        else{


        int x = ceil(n/(2*1.0));
        //cout<<x<<endl;
        if(x>=k){
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                        if(((i%2==1)&&(j%2==1)) && (i==j)){
                                if(k!=0){
                                     cout<<"R";
                                     k--;
                                }
                                else{
                                    cout<<".";
                                }

                        }
                        else{
                            cout<<".";
                        }
                    }
                    cout<<endl;
                }

        }
        else{
            cout<<-1<<endl;
        }
        }
    }
return 0;
}
