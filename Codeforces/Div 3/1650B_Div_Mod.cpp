#include<bits/stdc++.h>
using namespace std;
void div()
{

    long long int l,r,a,sum,les_higer,pr,hr,fm,lm;

    cin>>l>>r>>a;
    /*
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
    */
   if(l==r && l==a){
        cout<<1<<endl;
    }
    else if(r<a){
        cout<<r<<endl;
    }
    else if(a<l){
        long long int xx = r/a + (r%a);
        long long int yy = ((r-1)/a)+((r-1)%a);
        cout<<max(xx,yy)<<endl;
    }
    else if(r>=a && a>=l){

        sum = (r/a)+(r%a);
        pr = a-1;
        les_higer = r-1;
        hr = (les_higer/a)+(les_higer%a);
        fm = max(sum,pr);
        lm = max(fm,hr);
        cout<<lm<<endl;
    }

    else{
        cout<<r<<endl;
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
