#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x;
    cin>>t;
    stack<int>s;
    while(t--)
    {
     cin>>n;

    switch(n)
    {
    case 1:
        cin>>x;
        s.push(x);
        break;
    case 2:
        s.pop();
        break;
    case 3:
        if(s.empty())
        {
            cout<<"Empty!"<<endl;
        }
        else
        {
             cout<<s.top()<<endl;
        }

        break;
    default:
        cout<<"Not in here"<<endl;
        break;
    }

    }

    return 0;
}
