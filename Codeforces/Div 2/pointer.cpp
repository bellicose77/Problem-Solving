#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=5;
    int *ptr;
    ptr=&x;
    *ptr=6;
    cout<<*ptr<<endl;
    cout<<x<<endl;
    return 0;
}
