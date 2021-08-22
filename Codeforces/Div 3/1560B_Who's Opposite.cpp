#include<bits/stdc++.h>
using namespace std;
/*
int opposite(int a,int b,int c)
{
    int sum = a+b;
    int non = abs(a-b);
    int cd = abs(c-b);
    int csum = non+c;
    if(sum<c)
    {
        //cout<<"True"<<endl;
        return -1;
    }
    else if(non==1) {
            //cout<<"<"<<endl;

            return -1;
    }
    else if(cd==1 && a>c)
    {
        return -1;
    }
    else{
        int same = non+c;
        return same;

    }
}
*/
int opposite(int a,int b,int c)
{

    int man = abs(a-b)*2;
    if(man==2 || man<c)
    {
        return -1;
    }
    else if(a>man || b>man)
    {
        return -1;
    }
    else{
        int dif = abs(a-b);
        int total = dif+c;
        if(total>man)
        {

            int u = total-man;
            return u;
        }
        else{

            return total;
        }
    }
}
int main()
{

    int t,n;
    cin>>t;
    int a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        int result=opposite(a,b,c);
        cout<<result<<endl;
    }
    return 0;
}
