#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,k,result=-1;
    cin>>n>>k;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0;i<n;i++){
            bool ok = true;
        for(int j=0;j<n;j++){
            if(i!=j && (k<abs(arr[i][0]-arr[j][0])+abs(arr[i][1]-arr[j][1]))){
                ok=false;
                break;
            }
        }
        if(ok){
            result=1;
            break;
        }
    }
    cout<<result<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
      ans();
    }
    return 0;
}
