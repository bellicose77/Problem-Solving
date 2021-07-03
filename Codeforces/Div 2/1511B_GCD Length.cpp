#include<bits/stdc++.h>
using namespace std;
void gcd_length(int a,int b,int c)
{
    if(a==1 && b == 1 && c==1 )
    {
        cout<<1<<" "<<1<<endl;
    }
    else if(a==2 && b==1 && c==1)
    {
        cout<<10<<" "<<1<<endl;
    }
    else if(a==1 && b==2 && c==1)
    {
        cout<<1<<" "<<10<<endl;
    }
    else if(a==2 && b==2 && c==1)
    {
        cout<<11<<" "<<10<<endl;
    }
    else if(a==2 && b==2 && c==2)
    {
        cout<<10<<" "<<10<<endl;
    }
    else if(a==3 && b==1 && c==1)
    {
        cout<<100<<" "<<1<<endl;
    }
    else if(a==1 && b==3 && c==1)
    {
        cout<<1<<" "<<100<<endl;
    }
    else if(a==3 && b==2 && c==1)
    {
        cout<<101<<" "<<10<<endl;
    }
    else if(a==3 && b==2 && c==2)
    {
        cout<<100<<" "<<10<<endl;
    }
    else if(a==1 && b==3 && c==1)
    {
        cout<<1<<" "<<100<<endl;
    }
    else if(a==2 && b==3 && c==1)
    {
        cout<<10<<" "<<101<<endl;
    }
    else if(a==2 && b==3 && c==2)
    {
        cout<<10<<" "<<100<<endl;
    }
    else if(a==4 && b==1 && c==1)
    {
        cout<<1000<<" "<<1<<endl;
    }
    else if(a==4 && b==2 && c==1)
    {
        cout<<1001<<" "<<10<<endl;
    }
    else if(a==4 && b==2 && c==2)
    {
        cout<<1000<<" "<<10<<endl;
    }
    else if(a==4 && b==3 && c==1)
    {
        cout<<1001<<" "<<100<<endl;
    }
    else if(a==4 && b==3 && c==2)
    {
        cout<<1010<<" "<<100<<endl;
    }
    else if(a==4 && b==3 && c==3)
    {
        cout<<1000<<" "<<endl;
    }
    else if(a==4 && b==4 && c==1)
    {
        cout<<1001<<" "<<1000<<endl;
    }
    else if(a==4 && b==4 && c==2)
    {
        cout<<1010<<" "<<1000<<endl;
    }
    else if(a==4 && b==4 && c==3)
    {
        cout<<1100<<" "<<1000<<endl;
    }
    else if(a==4 && b==4 && c==4)
    {
        cout<<1000<<" "<<1000<<endl;
    }
    else if(a==1 && b==4 && c==1)
    {
        cout<<1<<" "<<1000<<endl;
    }
    else if(a==2 && b==4 && c==1)
    {
        cout<<10<<" "<<1001<<endl;
    }
    else if(a==2 && b==4 && c==2)
    {
        cout<<10<<" "<<1000<<endl;
    }
    else if(a==3 && b==4 && c==1)
    {
        cout<<100<<" "<<1001<<endl;
    }
    else if(a==3 && b==4 && c==2)
    {
        cout<<100<<" "<<1010<<endl;
    }
    else if(a==3 && b==4 && c==3)
    {
        cout<<100<<" "<<1000<<endl;

    }
    else if(a==5 && b==1 && c==1)
    {
        cout<<10000<<" "<<1<<endl;
    }
    else if(a==5 && b==2 && c==1)
    {
        cout<<10001<<" "<<10<<endl;
    }
    else if(a==5 && b==2 && c==2)
    {
        cout<<10000<<" "<<10<<endl;
    }
    else if(a==5 && b==3 && c==1 )
    {
        cout<<10001<<" "<<100<<endl;
    }
    else if(a==5 && b==3 && c==2)
    {
        cout<<10010<<" "<<100<<endl;
    }
    else if(a==5 && b==3 && c==3)
    {
        cout<<10000<<" "<<100<<endl;
    }
    else if(a==5 && b==4 && c==1)
    {
        cout<<10001<<" "<<1000<<endl;
    }
    else if(a==5 && b==4 && c==2)
    {
        cout<<10010<<" "<<1000<<endl;
    }
    else if(a==5 && b==4 && c==3)
    {
        cout<<10100<<" "<<1000<<endl;
    }
    else if(a==5 && b==4 && c==4)
    {
        cout<<10000<<" "<<1000<<endl;
    }
    else if(a==5 && b==5 && c==1)
    {
        cout<<10001<<" "<<10000<<endl;
    }
    else if(a==5 && b==5 && c==2)
    {
        cout<<10010<<" "<<10000<<endl;
    }
    else if(a==5 && b==5 && c==3)
    {
        cout<<10100<<" "<<10000<<endl;
    }
    else if(a==5 && b==5 && c==4)
    {
        cout<<11000<<" "<<10000<<endl;
    }
    else if(a==5 && b==5 && c==5)
    {
        cout<<10000<<" "<<10000<<endl;
    }
    else if(a==1 && b==5 && c==1)
    {
        cout<<1<<" "<<10000<<endl;
    }
    else if(a==2 && b==5 && c==1)
    {
        cout<<10<<" "<<10001<<endl;
    }
    else if(a==2 && b==5 && c==2)
    {
        cout<<10<<" "<<10000<<endl;
    }
    else if(a==3 && b==5 && c==1)
    {
        cout<<100<<" "<<10001<<endl;
    }
    else if(a==3 && b==5 && c==2)
    {
        cout<<100<<" "<<10010<<endl;
    }
    else if(a==3 && b==5 && c==3)
    {
        cout<<100<<" "<<10000<<endl;
    }
    else if(a==4 && b==5 && c==1)
    {
        cout<<1000<<" "<<10001<<endl;
    }
    else if(a==4 && b==5 && c==2)
    {
        cout<<1000<<" "<<10010<<endl;
    }
    else if(a==4 && b==5 && c==3)
    {
        cout<<1000<<" "<<10100<<endl;
    }
    else if(a==4 && b==5&& c==4)
    {
        cout<<1000<<" "<<10000<<endl;
    }
    else if(a==6 && b==1 && c==1)
    {
        cout<<100000<<" "<<1<<endl;
    }
    else if(a==6 && b==2 && c==1)
    {
        cout<<100001<<" "<<10<<endl;
    }
    else if(a==6 && b==2 && c==2)
    {
        cout<<100000<<" "<<10<<endl;
    }
    else if(a==6 && b==3 && c==1)
    {
        cout<<100001<<" "<<100<<endl;
    }
    else if(a==6 && b==3 && c==2)
    {
        cout<<100010<<" "<<100<<endl;
    }
    else if(a==6 && b==3 && c==3)
    {
        cout<<100000<<" "<<100<<endl;
    }
    else if(a==6 && b==4 && c==1)
    {
        cout<<100001<<" "<<1000<<endl;
    }
    else if(a==6 && b==4 && c==2)
    {
        cout<<100010<<" "<<1000<<endl;
    }
    else if(a==6 && b==4 && c==3)
    {
        cout<<100100<<" "<<1000<<endl;
    }
    else if(a==6 && b==4 && c==4)
    {
        cout<<100000<<" "<<1000<<endl;
    }
    else if(a==6 && b==5 && c==1)
    {
        cout<<100001<<" "<<10000<<endl;
    }
    else if(a==6 && b==5 && c==2)
    {
        cout<<100010<<" "<<10000<<endl;
    }
    else if(a==6 && b==5 && c==3)
    {
        cout<<100100<<" "<<10000<<endl;
    }
    else if(a==6 && b==5 && c==4)
    {
        cout<<101000<<" "<<10000<<endl;
    }
    else if(a==6 && b==5 && c==5)
    {
        cout<<100000<<" "<<10000<<endl;
    }
    else if(a==6 && b==6 && c==1)
    {
        cout<<100001<<" "<<100000<<endl;
    }
    else if(a==6 && b==6 && c==2)
    {
        cout<<100010<<" "<<100000<<endl;
    }
    else if(a==6 && b==6 && c==3)
    {
        cout<<100100<<" "<<100000<<endl;
    }
    else if(a==6 && b==6 && c==4)
    {
        cout<<101000<<" "<<100000<<endl;
    }
    else if(a==6 && b==6 && c==5)
    {
        cout<<110000<<" "<<100000<<endl;
    }
    else if(a==6 && b==6 && c==6)
    {
        cout<<100000<<" "<<100000<<endl;
    }
    else if(a==1 && b==6 && c==1)
    {
        cout<<1<<" "<<100000<<endl;
    }
    else if(a==2 && b==6 && c==1)
    {
        cout<<10<<" "<<100001<<endl;
    }
    else if(a==2 && b==6 && c==2)
    {
        cout<<10<<" "<<100000<<endl;
    }
    else if(a==3 && b==6 && c==1)
    {
        cout<<100<<" "<<100001<<endl;
    }
    else if(a==3 && b==6 && c==2)
    {
        cout<<100<<" "<<100010<<endl;
    }
    else if(a==3 && b==6 && c==3)
    {
        cout<<100<<" "<<100000<<endl;
    }
    else if(a==4 && b==6 && c==1)
    {
        cout<<1000<<" "<<100001<<endl;
    }
    else if(a==4 && b==6 && c==2)
    {
        cout<<1000<<" "<<100010<<endl;
    }
    else if(a==4 && b==6 && c==3)
    {
        cout<<1000<<" "<<100100<<endl;
    }
    else if(a==4 && b==6 && c==4)
    {
        cout<<1000<<" "<<100000<<endl;
    }
    else if(a==5 && b==6 && c==1)
    {
        cout<<10000<<" "<<100001<<endl;
    }
    else if(a==5 && b==6 && c==2)
    {
        cout<<10000<<" "<<100010<<endl;
    }
    else if(a==5 && b==6 && c==3)
    {
        cout<<10000<<" "<<100100<<endl;
    }
    else if(a==5 && b==6 && c==4)
    {
        cout<<10000<<" "<<101000<<endl;
    }
    else if(a==5 && b==6 && c==5)
    {
        cout<<10000<<" "<<100000<<endl;
    }
    else if(a==7 && b==1 && c==1)
    {
        cout<<1000000<<" "<<1<<endl;
    }
    else if(a==7 && b==2 && c==1)
    {
        cout<<1000001<<" "<<10<<endl;
    }
    else if(a==7 && b==2 && c==2)
    {
        cout<<1000000<<" "<<10<<endl;
    }
    else if(a==7 && b==3 && c==1)
    {
        cout<<1000001<<" "<<100<<endl;
    }
    else if(a==7 && b==3 && c==2)
    {
        cout<<1000010<<" "<<100<<endl;
    }
    else if(a==7 && b==3 && c==3)
    {
        cout<<1000000<<" "<<100<<endl;
    }
    else if(a==7 && b==4 && c==1)
    {
        cout<<1000001<<" "<<1000<<endl;
    }
    else if(a==7 && b==4 && c==2)
    {
        cout<<1000010<<" "<<1000<<endl;
    }
    else if(a==7 && b==4 && c==3)
    {
        cout<<1000100<<" "<<1000<<endl;
    }
    else if(a==7 && b==4 && c==4)
    {
        cout<<1000000<<" "<<1000<<endl;
    }
    else if(a==7 && b==5 && c==1)
    {
        cout<<1000001<<" "<<10000<<endl;
    }
    else if(a==7 && b==5 && c==2)
    {
        cout<<1000010<<" "<<10000<<endl;
    }
    else if(a==7 && b==5 && c==3)
    {
        cout<<1000100<<" "<<10000<<endl;
    }
    else if(a==7 && b==5 && c==4)
    {
        cout<<1001000<<" "<<10000<<endl;

    }
    else if(a==7 && b==5 && c==5)
    {
        cout<<1000000<<" "<<10000<<endl;
    }
    else if(a==7 && b==6 && c==1)
    {
        cout<<1000001<<" "<<100000<<endl;
    }
    else if(a==7 && b==6 && c==2)
    {
        cout<<1000010<<" "<<100000<<endl;
    }
    else if(a==7 && b==6 && c==3)
    {
        cout<<1000100<<" "<<100000<<endl;
    }
    else if(a==7 && b==6 && c==4)
    {
        cout<<1001000<<" "<<100000<<endl;
    }
    else if(a==7 && b==6 && c==5)
    {
        cout<<1010000<<" "<<100000<<endl;
    }
    else if(a==7 && b==6 && c==6)
    {
        cout<<1000000<<" "<<100000<<endl;
    }
    else if(a==7 && b==7 && c==1)
    {
        cout<<1000001<<" "<<1000000<<endl;
    }
    else if(a==7 && b==7 && c==2)
    {
        cout<<1000010<<" "<<1000000<<endl;
    }
    else if(a==7 && b==7 && c==3)
    {
        cout<<1000100<<" "<<1000000<<endl;
    }
    else if(a==7 && b==7 && c==4)
    {
        cout<<1001000<<" "<<1000000<<endl;
    }
    else if(a==7 && b==7 && c==5)
    {
        cout<<1010000<<" "<<1000000<<endl;
    }
    else if(a==7 && b==7 && c==6)
    {
        cout<<1100000<<" "<<1000000<<endl;
    }
    else if(a==7 && b==7 && c==7)
    {
        cout<<1000000<<" "<<1000000<<endl;
    }
    else if(a==1 && b==7 && c==1)
    {
        cout<<1<<" "<<1000000<<endl;
    }
    else if(a==2 && b==7 && c==1)
    {
        cout<<10<<" "<<1000001<<endl;
    }
    else if(a==2 && b==7 && c==2)
    {
        cout<<10<<" "<<1000000<<endl;
    }
    else if(a==3 && b==7 && c==1)
    {
        cout<<100<<" "<<1000001<<endl;
    }
    else if(a==3 && b==7 && c==2)
    {
        cout<<100<<" "<<1000010<<endl;
    }
    else if(a==3 && b==7 && c==3)
    {
        cout<<100<<" "<<1000000<<endl;
    }
    else if(a==4 && b==7 && c==1)
    {
        cout<<1000<<" "<<1000001<<endl;
    }
    else if(a==4 && b==7 && c==2)
    {
        cout<<1000<<" "<<1000010<<endl;
    }
    else if(a==4 && b==7 && c==3)
    {
        cout<<1000<<" "<<1000100<<endl;
    }
    else if(a==4 && b==7 && c==4)
    {
        cout<<1000<<" "<<1000000<<endl;
    }
    else if(a==5 && b==7 && c==1)
    {
        cout<<10000<<" "<<1000001<<endl;
    }
    else if(a==5 && b==7 && c==2)
    {
        cout<<10000<<" "<<1000010<<endl;
    }
    else if(a==5 && b==7 && c==3)
    {
        cout<<10000<<" "<<1000100<<endl;
    }
    else if(a==5 && b==7 && c==4)
    {
        cout<<10000<<" "<<1001000<<endl;
    }
    else if(a==5 && b==7 && c==5)
    {
        cout<<10000<<" "<<1000000<<endl;
    }
    else if(a==6 && b==7 && c==1)
    {
        cout<<100000<<" "<<1000001<<endl;
    }
    else if(a==6 && b==7 && c==2)
    {
        cout<<100000<<" "<<1000010<<endl;
    }
    else if(a==6 && b==7 && c==3)
    {
        cout<<100000<<" "<<1000100<<endl;
    }
    else if(a==6 && b==7 && c==4)
    {
        cout<<100000<<" "<<1001000<<endl;
    }
    else if(a==6 && b==7 && c==5)
    {
        cout<<100000<<" "<<1010000<<endl;
    }
    else if(a==6 && b==7 && c==6)
    {
        cout<<100000<<" "<<1000000<<endl;
    }
    else if(a==8 && b==1 && c==1)
    {
        cout<<10000000<<" "<<1<<endl;
    }
    else if(a==8 && b==2 && c==1)
    {
        cout<<10000001<<" "<<10<<endl;
    }
    else if(a==8 && b==2 && c==2)
    {
        cout<<10000000<<" "<<10<<endl;
    }
    else if(a==8 && b==3 && c==1)
    {
        cout<<10000001<<" "<<100<<endl;
    }
    else if(a==8 && b==3 && c==2)
    {
        cout<<10000010<<" "<<100<<endl;
    }
    else if(a==8 && b==3 && c==3)
    {
        cout<<10000000<<" "<<100<<endl;
    }
    else if(a==8 && b==4 && c==1)
    {
        cout<<10000001<<" "<<1000<<endl;
    }
    else if(a==8 && b==4 && c==2)
    {
        cout<<10000010<<" "<<1000<<endl;
    }
    else if(a==8 && b==4 && c==3)
    {
        cout<<10000100<<" "<<1000<<endl;
    }
    else if(a==8 && b==4 && c==4)
    {
        cout<<10000000<<" "<<1000<<endl;
    }
    else if(a==8 && b==5 && c==1)
    {
        cout<<10000001<<" "<<10000<<endl;
    }
    else if(a==8 && b==5 && c==2)
    {
        cout<<10000010<<" "<<10000<<endl;
    }
    else if(a==8 && b==5 && c==3)
    {
        cout<<10000100<<" "<<10000<<endl;
    }
    else if(a==8 && b==5 && c==4)
    {
        cout<<10001000<<" "<<10000<<endl;
    }
    else if(a==8 && b==5 && c==5)
    {
        cout<<10000000<<" "<<10000<<endl;
    }
    else if(a==8 && b==6 && c==1)
    {
        cout<<10000001<<" "<<100000<<endl;
    }
    else if(a==8 && b==6 && c==2)
    {
        cout<<10000010<<" "<<100000<<endl;
    }
    else if(a==8 && b==6 && c==3)
    {
        cout<<10000100<<" "<<100000<<endl;
    }
    else if(a==8 && b==6 && c==4)
    {
        cout<<10001000<<" "<<100000<<endl;
    }
    else if(a==8 && b==6 && c==5)
    {
        cout<<10010000<<" "<<100000<<endl;
    }
    else if(a==8 && b==6 && c==6)
    {
        cout<<10000000<<" "<<100000<<endl;
    }
    else if(a==8 && b==7 && c==1)
    {
        cout<<10000001<<" "<<1000000<<endl;
    }
    else if(a==8 && b==7 && c==2)
    {
        cout<<10000010<<" "<<1000000<<endl;
    }
    else if(a==8 && b==7 && c==3)
    {
        cout<<10000100<<" "<<1000000<<endl;
    }
    else if(a==8 && b==7 && c==4)
    {
        cout<<10001000<<" "<<1000000<<endl;
    }
    else if(a==8 && b==7 && c==5)
    {
        cout<<10010000<<" "<<1000000<<endl;
    }
    else if(a==8 && b==7 && c==6)
    {
        cout<<10100000<<" "<<1000000<<endl;
    }
    else if(a==8 && b==7 && c==7)
    {
        cout<<10000000<<" "<<1000000<<endl;
    }
    else if(a==8 && b==8 && c==1)
    {
        cout<<10000001<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==2)
    {
        cout<<10000010<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==3)
    {
        cout<<10000100<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==4)
    {
        cout<<10001000<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==5)
    {
        cout<<10010000<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==6)
    {
        cout<<10100000<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==7)
    {
        cout<<11000000<<" "<<10000000<<endl;
    }
    else if(a==8 && b==8 && c==8)
    {
        cout<<10000000<<" "<<10000000<<endl;
    }
    else if(a==1 && b==8 && c==1)
    {
        cout<<1<<" "<<10000000<<endl;
    }
    else if(a==2 && b==8 && c==1)
    {
        cout<<10<<" "<<10000001<<endl;
    }
    else if(a==2 && b==8 && c==2)
    {
        cout<<10<<" "<<10000000<<endl;
    }
    else if(a==3 && b==8 && c==1)
    {
        cout<<100<<" "<<10000001<<endl;
    }
    else if(a==3 && b==8 && c==2)
    {
        cout<<100<<" "<<10000010<<endl;
    }
    else if(a==3 && b==8 && c==3)
    {
        cout<<100<<" "<<10000000<<endl;
    }
    else if(a==4 && b==8 && c==1)
    {
        cout<<1000<<" "<<10000001<<endl;
    }
    else if(a==4 && b==8 && c==2)
    {
        cout<<1000<<" "<<10000010<<endl;
    }
    else if(a==4 && b==8 && c==3)
    {
        cout<<1000<<" "<<10000100<<endl;
    }
    else if(a==4 && b==8 && c==4)
    {
        cout<<1000<<" "<<10000000<<endl;
    }
    else if(a==5 && b==8 && c==1)
    {
        cout<<10000<<" "<<10000001<<endl;
    }
    else if(a==5 && b==8 && c==2)
    {
        cout<<10000<<" "<<10000010<<endl;
    }
    else if(a==5 && b==8 && c==3)
    {
        cout<<10000<<" "<<10000100<<endl;
    }
    else if(a==5 && b==8 && c==4)
    {
        cout<<10000<<" "<<10001000<<endl;
    }
    else if(a==5 && b==8 && c==5)
    {
        cout<<10000<<" "<<10000000<<endl;
    }
    else if(a==6 && b==8 && c==1)
    {
        cout<<100000<<" "<<10000001<<endl;
    }
    else if(a==6 && b==8 && c==2)
    {
        cout<<100000<<" "<<10000010<<endl;
    }
    else if(a==6 && b==8 && c==3)
    {
        cout<<100000<<" "<<10000100<<endl;
    }
    else if(a==6 && b==8 && c==4)
    {
        cout<<100000<<" "<<10001000<<endl;
    }
    else if(a==6 && b==8 && c==5)
    {
        cout<<100000<<" "<<10010000<<endl;
    }
    else if(a==6 && b==8 && c==6)
    {
        cout<<100000<<" "<<10000000<<endl;
    }
    else if(a==7 && b==8 && c==1)
    {
        cout<<1000000<<" "<<10000001<<endl;
    }
    else if(a==7 && b==8 && c==2)
    {
        cout<<1000000<<" "<<10000010<<endl;
    }
    else if(a==7 && b==8 && c==3)
    {
        cout<<1000000<<" "<<10000100<<endl;
    }
    else if(a==7 && b==8 && c==4)
    {
        cout<<1000000<<" "<<10001000<<endl;
    }
    else if(a==7 && b==8 && c==5)
    {
        cout<<1000000<<" "<<10010000<<endl;
    }
    else if(a==7 && b==8 && c==6)
    {
        cout<<1000000<<" "<<10100000<<endl;
    }
    else if(a==7 && b==8 && c==7)
    {
        cout<<1000000<<" "<<10000000<<endl;
    }
    else if(a==9 && b==1 && c==1)
    {
        cout<<100000000<<" "<<1<<endl;
    }
    else if(a==9 && b==2 && c==1)
    {
        cout<<100000001<<" "<<10<<endl;
    }
    else if(a==9 && b==2 && c==2)
    {
        cout<<100000000<<" "<<10<<endl;
    }
    else if(a==9 && b==3 && c==1)
    {
        cout<<100000001<<" "<<100<<endl;
    }
    else if(a==9 && b==3 && c==2)
    {
        cout<<100000010<<" "<<100<<endl;
    }
    else if(a==9 && b==3 && c==3)
    {
        cout<<100000000<<" "<<100<<endl;
    }
    else if(a==9 && b==4 && c==1)
    {
        cout<<100000001<<" "<<1000<<endl;
    }
    else if(a==9 && b==4 && c==2)
    {
        cout<<100000010<<" "<<1000<<endl;
    }
    else if(a==9 && b==4 && c==3)
    {
        cout<<100000100<<" "<<1000<<endl;
    }
    else if(a==9 && b==4 && c==4)
    {
        cout<<100000000<<" "<<1000<<endl;
    }
    else if(a==9 && b==5 && c==1)
    {
        cout<<100000001<<" "<<10000<<endl;
    }
    else if(a==9 && b==5 && c==2)
    {
        cout<<100000010<<" "<<10000<<endl;
    }
    else if(a==9 && b==5 && c==3)
    {
        cout<<100000100<<" "<<10000<<endl;
    }
    else if(a==9 && b==5 && c==4)
    {
        cout<<100001000<<" "<<10000<<endl;
    }
    else if(a==9 && b==5 && c==5)
    {
        cout<<100000000<<" "<<10000<<endl;
    }
    else if(a==9 && b==6 && c==1)
    {
        cout<<100000001<<" "<<100000<<endl;
    }
    else if(a==9 && b==6 && c==2)
    {
        cout<<100000010<<" "<<100000<<endl;
    }
    else if(a==9 && b==6 && c==3)
    {
        cout<<100000100<<" "<<100000<<endl;
    }
    else if(a==9 && b==6 && c==4)
    {
        cout<<100001000<<" "<<100000<<endl;
    }
    else if(a==9 && b==6 && c==5)
    {
        cout<<100010000<<" "<<100000<<endl;
    }
    else if(a==9 && b==6 && c==6)
    {
        cout<<100000000<<" "<<100000<<endl;
    }
    else if(a==9 && b==7 && c==1)
    {
        cout<<100000001<<" "<<1000000<<endl;
    }
    else if(a==9 && b==7 && c==2)
    {
        cout<<100000010<<" "<<1000000<<endl;
    }
    else if(a==9 && b==7 && c==3)
    {
        cout<<100000100<<" "<<1000000<<endl;
    }
    else if(a==9 && b==7 && c==4)
    {
        cout<<100001000<<" "<<1000000<<endl;
    }
    else if(a==9 && b==7 && c==5)
    {
        cout<<100010000<<" "<<1000000<<endl;
    }
    else if(a==9 && b==7 && c==6)
    {
        cout<<100100000<<" "<<1000000<<endl;
    }
    else if(a==9 && b==7 && c==7)
    {
        cout<<100000000<<" "<<1000000<<endl;
    }
    else if(a==9 && b==8 && c==1)
    {
        cout<<100000001<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==2)
    {
        cout<<100000010<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==3)
    {
        cout<<100000100<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==4)
    {
        cout<<100001000<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==5)
    {
        cout<<100010000<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==6)
    {
        cout<<100100000<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==7)
    {
        cout<<101000000<<" "<<10000000<<endl;
    }
    else if(a==9 && b==8 && c==8)
    {
        cout<<100000000<<" "<<10000000<<endl;
    }
    else if(a==9 && b==9 && c==1)
    {
        cout<<100000001<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==2)
    {
        cout<<100000010<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==3)
    {
        cout<<100000100<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==4)
    {
        cout<<100001000<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==5)
    {
        cout<<100010000<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==6)
    {
        cout<<100100000<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==7)
    {
        cout<<101000000<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==8)
    {
        cout<<110000000<<" "<<100000000<<endl;
    }
    else if(a==9 && b==9 && c==9)
    {
        cout<<100000000<<" "<<100000000<<endl;
    }
    else if(a==1 && b==9 && c==1)
    {
        cout<<1<<" "<<100000000<<endl;
    }
    else if(a==2 && b==9 && c==1)
    {
        cout<<10<<" "<<100000001<<endl;
    }
    else if(a==2 && b==9 && c==2)
    {
        cout<<10<<" "<<100000000<<endl;
    }
    else if(a==3 && b==9 && c==1)
    {
        cout<<100<<" "<<100000001<<endl;
    }
    else if(a==3 && b==9 && c==2)
    {
        cout<<100<<" "<<100000010<<endl;
    }
    else if(a==3 && b==9 && c==3)
    {
        cout<<100<<" "<<100000000<<endl;
    }
    else if(a==4 && b==9 && c==1)
    {
        cout<<1000<<" "<<100000001<<endl;
    }
    else if(a==4 && b==9 && c==2)
    {
        cout<<1000<<" "<<100000010<<endl;
    }
    else if(a==4 && b==9 && c==3)
    {
        cout<<1000<<" "<<100000100<<endl;
    }
    else if(a==4 && b==9 && c==4)
    {
        cout<<1000<<" "<<100000000<<endl;
    }
    else if(a==5 && b==9 && c==1)
    {
        cout<<10000<<" "<<100000001<<endl;
    }
    else if(a==5 && b==9 && c==2)
    {
        cout<<10000<<" "<<100000010<<endl;
    }
    else if(a==5 && b==9 && c==3)
    {
        cout<<10000<<" "<<100000100<<endl;
    }
    else if(a==5 && b==9 && c==4)
    {
        cout<<10000<<" "<<100001000<<endl;
    }
    else if(a==5 && b==9 && c==5)
    {
        cout<<10000<<" "<<100000000<<endl;
    }
    else if(a==6 && b==9 && c==1)
    {
        cout<<100000<<" "<<100000001<<endl;
    }
    else if(a==6 && b==9 && c==2)
    {
        cout<<100000<<" "<<100000010<<endl;
    }
    else if(a==6 && b==9 && c==3)
    {
        cout<<100000<<" "<<100000100<<endl;
    }
    else if(a==6 && b==9 && c==4)
    {
        cout<<100000<<" "<<100001000<<endl;
    }
    else if(a==6 && b==9 && c==5)
    {
        cout<<100000<<" "<<100010000<<endl;
    }
    else if(a==6 && b==9 && c==6)
    {
        cout<<100000<<" "<<100000000<<endl;
    }
    else if(a==7 && b==9 && c==1)
    {
        cout<<1000000<<" "<<100000001<<endl;
    }
    else if(a==7 && b==9 && c==2)
    {
        cout<<1000000<<" "<<100000010<<endl;
    }
    else if(a==7 && b==9 && c==3)
    {
        cout<<1000000<<" "<<100000100<<endl;
    }
    else if(a==7 && b==9 && c==4)
    {
        cout<<1000000<<" "<<100001000<<endl;
    }
    else if(a==7 && b==9 && c==5)
    {
        cout<<1000000<<" "<<100010000<<endl;
    }
    else if(a==7 && b==9 && c==6)
    {
        cout<<1000000<<" "<<100100000<<endl;
    }
    else if(a==7 && b==9 && c==7)
    {
        cout<<1000000<<" "<<100000000<<endl;
    }
    else if(a==8 && b==9 && c==1)
    {
        cout<<10000000<<" "<<100000001<<endl;
    }
    else if(a==8 && b==9 && c==2)
    {
        cout<<10000000<<" "<<100000010<<endl;
    }
    else if(a==8 && b==9 && c==3)
    {
        cout<<10000000<<" "<<100000100<<endl;
    }
    else if(a==8 && b==9 && c==4)
    {
        cout<<10000000<<" "<<100001000<<endl;
    }
    else if(a==8 && b==9 && c==5)
    {
        cout<<10000000<<" "<<100010000<<endl;
    }
    else if(a==8 && b==9 && c==6)
    {
        cout<<10000000<<" "<<100100000<<endl;
    }
    else if(a==8 && b==9 && c==7)
    {
        cout<<10000000<<" "<<101000000<<endl;
    }
    else
    {
        cout<<10000000<<" "<<100000000<<endl;
    }
}
int main()
{
    int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        gcd_length(a,b,c);
    }
    return 0;
}
