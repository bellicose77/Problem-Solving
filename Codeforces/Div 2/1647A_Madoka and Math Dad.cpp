#include<bits/stdc++.h>
using namespace std;
void digit(int n)
{
    if(n<=2)
    {
        cout<<n<<endl;
    }
    else
    {
        int x = n/2;
        int mid = n%2;
        int diff = x-mid;
        if(diff>1){
            mid+=diff;
        }
        cout<<x<<" after add"<<mid<<endl;
        cout<<x<<" "<<mid<<endl;
        //vector<int>v;
        int fina=mid+x;
        if(x>mid){
            for(int i=0;i<fina;i++){
                if(i%2==0){
                    cout<<2;
                }
                else{
                    cout<<1;
                }
            }
            cout<<endl;
        }
        else{
            for(int i=0;i<fina;i++){
                if(i%2==0){
                    cout<<1;
                }
                else{
                    cout<<2;
                }
            }
            cout<<endl;
        }

}
}

int main()

{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        digit(n);
    }

    return 0;
}
