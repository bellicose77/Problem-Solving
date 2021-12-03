#include<bits/stdc++.h>
using namespace std;
void number(int n)
{
    if(n==0)
    {
      return;
    }

         cout<<n<<endl;

        number(n-1);
        cout<<n<<endl;

}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        number(n);

    }
}
