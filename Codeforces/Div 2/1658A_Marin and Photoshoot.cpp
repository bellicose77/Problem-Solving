#include<bits/stdc++.h>
using namespace std;
void marin(int n)
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<n-1; i++)
    {
        cout<<"something"<<endl;
        cout<<s[i]<<endl;
        if(s[i]=='0')
        {
            c+=2;
            cout<<c<<endl;
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
        marin(n);
    }

    return 0;
}
