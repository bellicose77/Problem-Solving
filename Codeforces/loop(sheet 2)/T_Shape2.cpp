#include<bits/stdc++.h>
using namespace std;
void pyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n)-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    cin>>n;
    pyramid(n);
    return 0;
}
