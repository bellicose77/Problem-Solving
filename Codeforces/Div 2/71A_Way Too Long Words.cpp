#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {



        string s;
        cin>>s;
        if(s.size()<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            int x=s.size()-2;
            cout<<s[0];
            cout<<x;
            cout<<s.back()<<endl;
        }


    }
    return 0;
}
