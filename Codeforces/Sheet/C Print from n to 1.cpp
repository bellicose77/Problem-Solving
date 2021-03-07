#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printf("%d ",n);
        print(n-1);

    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}

