#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int>& x,stack<int> &y)
{
    while(!(x.empty()))
    {
        y.push(x.top());
        x.pop();
    }
}
void print(stack<int>s)
{
    while(!(s.empty()))
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void reverse_stack(stack<int>& s)
{
    stack<int>a,b;
    transfer(s,a);
    transfer(a,b);
    transfer(b,s);
    print(s);
}
int main()
{
    int n,x;
    cin>>n;
    stack<int>s;
    while(n--)
    {
        cin>>x;
        s.push(x);
    }
    reverse_stack(s);
    return 0;
}
