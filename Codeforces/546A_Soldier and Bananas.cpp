#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,k,sum=0;
    long long int n;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum+=(k*i);
    }
    if(n>=sum)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<sum-n<<endl;
    }
    return 0;
    /* other person code's
    int powa = w*(w+1)/2;
    int monie = k*powa - n;
    */

}
