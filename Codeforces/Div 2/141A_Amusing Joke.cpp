#include<bits/stdc++.h>
using namespace std;
void amusing(string s)
{
    string v;
    cin>>v;
    sort(v.begin(),v.end());
    sort(s.begin(),s.end());
    if(s==v)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    string u= s+t;
    amusing(u);
    return 0;
}
