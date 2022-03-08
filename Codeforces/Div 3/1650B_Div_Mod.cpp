#include<bits/stdc++.h>
using namespace std;
void div()
{
    long long int l,r,a,sum,les_higer,di ;
    cin>>l>>r>>a;
    if(a==1)
    {
        cout<<r<<endl;
    }
    else if(l==r && l==a){
        cout<<1<<endl;
    }
    else
    {
        if(r%a!=0)
        {
            di= r/a;
            sum=di+(r%a);
            cout<<sum<<endl;

        }
        else{
            les_higer = r-1;
            di = les_higer/a;
            sum = di+(les_higer%a);
            cout<<sum<<endl;
        }


    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        div();
    }

    return 0;
}
