#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x;
    cin>>y;
    if(x>=y || x%5!=0)
    {
        printf("%.2f",y);
    }
    else
    {
        float transection=x+0.50;
        float result=y-transection;
        printf("%.2f",result);
    }
    return 0;
}
