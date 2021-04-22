#include<bits/stdc++.h>
using namespace std;
void pangram(int nn,string ss)
{
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
    int c=0;
    sort(ss.begin(),ss.end());
    for(int i=0;i<ss.size();i++)
    {
        if(ss[i]!=ss[i+1])
        {
            c++;
        }
    }
    if(c==26)
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    pangram(n,s);
    return 0;
}
