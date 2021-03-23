#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,x;
    scanf("%ll",&t);
    stack<long long int>s;
    while(t--)
    {
     scanf("%ll",&n);

    switch(n)
    {
    case 1:
        scanf("%ll",&x);
        s.push(x);
        break;
    case 2:
        if(!s.empty())
        {
            s.pop();
        }

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

    }
    }
    return 0;
}
