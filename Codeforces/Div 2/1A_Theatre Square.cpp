#include<bits/stdc++.h>
using namespace std;
/* other code

   cout << (long long) ((N - 1) / A + 1) * ((M - 1) / A + 1) << '\n';
   */
/* another one
   l=i/k;
   m=j/k;
   if(i%k>0)l++;
   if(j%k>0)m++;
    n=m*l;
    printf("%lld\n",n);
    */
/* another one
     cout << ((LLN)((n + a - 1) / a) * ((m + a - 1) / a))  << endl;
     */
void flagstone()
{
    long long int n,m,a,x,y;
    cin>>n>>m>>a;
    if(n==1 && m==1)
    {
        cout<<n<<endl;
    }
    else
    {
    x=ceil(n/(a*1.0));
    y=ceil(m/(a*1.0));

    cout<<x*y<<endl;
    }

}
int main()
{
    flagstone();
    return 0;
}
