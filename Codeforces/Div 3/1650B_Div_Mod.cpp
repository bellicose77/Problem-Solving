#include<bits/stdc++.h>
using namespace std;
void div()
{

    long long int l,r,a,q,q1,re;

    cin>>l>>r>>a;
    q=l/a;
    q1=r/a;
    if(q==q1){
        re=q+(r%a);
        cout<<re<<endl;
    }
    else{
        re=max(((r/a)+(r%a)),((r/a)-1+a-1));
        cout<<re<<endl;
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
