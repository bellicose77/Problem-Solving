#include<bits/stdc++.h>
using namespace std;
/* other person's code
     cout<<a[1]<<a[2]<<a[0]<<endl;

     */
int main()
{
    string s;
    cin>>s;
    char temp;
    temp=s[2];
    s[2]=s[0];
    s[0]=s[1];
    s[1]=temp;
    cout<<s<<endl;
    return 0;
}
