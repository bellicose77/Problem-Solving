#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int sum=0,c=0;
    double volume;
    while(n--)
    {
        cin>>x;
        sum+=x;
        c++;
    }
    volume=sum/(c*1.0);
   printf("%.12lf\n",volume);
    return 0;
}
