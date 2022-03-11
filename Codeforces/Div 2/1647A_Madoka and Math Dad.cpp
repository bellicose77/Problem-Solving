#include<bits/stdc++.h>
using namespace std;
void digit(int n){
    if(n<=2){
        cout<<n<<endl;
    }
    else{
            int i=1;
        while(n!=0){
            n-=i;
            v.push_back(i);
            i++;

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
