#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    queue<int>q;
    while(n--)
    {
        cin>>x;
        q.push(x);
    }
    while(!(q.empty()))
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
