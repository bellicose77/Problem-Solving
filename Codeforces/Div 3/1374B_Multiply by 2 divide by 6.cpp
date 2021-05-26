#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=n;i>1;)
    {

        if(n%6==0)
        {
            n/=6;
            c++;
        }

        else
        {
            n*=2;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
