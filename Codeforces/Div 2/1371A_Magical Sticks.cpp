#include<bits/stdc++.h>
using namespace std;
/* other codes
  long long sum = (n * (n + 1)) / 2;
    cout << sum / n << '\n';

    another
     if(n==1)
    cout<<"1"<<endl;
   else if (n%2==1)
    cout<<n/2+1<<endl;
   else
    cout<<n/2<<endl;


*/
int main()
{
    int t;
    long long int n,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(long long int i=1;i<=n;i+=2)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
