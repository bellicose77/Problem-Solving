#include<bits/stdc++.h>
using namespace std;
void digit(int n)
{
    int c=1;
    if(n%3==0 || n%3==2)
    {

        while(n!=0)
        {
            if(c%2==1)
            {
                cout<<2;
                n-=2;
                c++;
            }
            else
            {
                cout<<1;
                n-=1;
                c++;
            }
        }
        cout<<endl;

    }
    else if(n%3==1)
    {
        while(n!=0)
        {
            if(c%2==1)
            {
                cout<<1;
                n-=1;
                c++;

            }
            else{
                cout<<2;
                n-=2;
                c++;
            }

        }
        cout<<endl;


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
