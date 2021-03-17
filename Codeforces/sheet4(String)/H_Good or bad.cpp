#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s.find('101')==true)
        {
            cout<<"good"<<endl;
        }
        else{
            cout<<"bad"<<endl;
        }
    }
    return 0;
}
