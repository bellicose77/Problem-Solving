#include<bits/stdc++.h>
using namespace std;
/*
 other's man code
 int k=5;
       for(int i=5;i>=1;i--){
           ans+=x/i;
           x=x%i;
       }
   */

/*
 this one is another person's code
x=int(input())
print((x+4)//5)
*/
int steps(int x)
{
    int c,st=0;
    while(x>0)
    {

        if(x>=5)
        {
            c=x/5;
            st+=c;
            x=x%5;

        }
        else if(x>=4)
        {
            c=x/4;
            st+=c;
            x=x%4;
        }
        else if(x>=3)
        {
            c=x/3;
            st+=c;
            x=x%3;
        }
        else if(x>=2)
        {
            c=x/2;
            st+=c;
            x=x%2;
        }
        else
        {
            c=x/1;
            st+=c;
            x=x%1;
        }
    }
    return st;
}
int main()
{
    int x;
    cin>>x;
    int result=steps(x);
    cout<<result<<endl;
    return 0;
}
