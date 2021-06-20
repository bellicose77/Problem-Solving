#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string x;
    cin>>n;
    int o=n;
    //stack<int>s;
    stack<string>s;
    stack<string>s1;
    /*

    for(int i=1;i<=n;i++)
    {
        s.push(i);
    }
    */
    while(n--)
    {
        cin>>x;
        s.push(x);
    }
     while(o--)
    {
        cin>>x;
        s1.push(x);
    }
    s.swap(s1);
    while(!(s.empty()))
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<s.size()<<endl;
    return 0;
}
