#include<bits/stdc++.h>
using namespace std;
/*
if(s[0] == '+' || s[1] == '+'){
            result++;
        }else{
            result--;
        }
*/
int main()
{
    int n;
    cin>>n;
    string s;
     int X=0;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
        {
            X++;
        }
        else if(s[1]=='-')
        {
            X--;
        }
    }

    cout<<X<<endl;
    return 0;
}
