#include<bits/stdc++.h>
using namespace std;
/*
 another person's code
   cin >>y;
    while(1){
        y++;
        int a=y/1000;
        int b=(y/100)%10;
        int c=(y/10)%10;
        int d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    cout <<y;
    return 0;

    another one
    set<int>s;

        int j=i, a=0;
        while(j>0)
        {
            int r = j%10; s.insert(r); j=j/10;
            a++;
        }
        if(s.size()==a)
        {
            cout<<i<<endl;
            break;
        }

    */
int main()
{
    int n,t,x,h,v,te,one;
    cin>>n;
    n+=1;
    while(1)
    {

        vector<int>d;
         t=n/1000;
         x=n%1000;
         h=x/100;
         v=x%100;
         te=v/10;
         one=v%10;
         d.push_back(t);
         d.push_back(h);
         d.push_back(te);
         d.push_back(one);
         sort(d.begin(),d.end());
         int flag=0;
         for(int i=0;i<d.size()-1;i++)
         {
             if(d[i]==d[i+1])
             {
                 flag=1;
                 break;
             }
         }
         if(flag==0)
         {
             cout<<n<<endl;
             break;
         }
         else
         {
             n++;
         }

    }


    return 0;
}

