#include<bits/stdc++.h>
using namespace std;
int fibbo(int n)
{
    if(n<=1){
       return n;
    }
    else{
        return fibbo(n-1) + fibbo(n-2);
    }

}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i =0;i<n;i++){
            int res = fibbo(i);
            cout<<res<<" ";
        }
        cout<<endl;

    }
    return 0;
}
