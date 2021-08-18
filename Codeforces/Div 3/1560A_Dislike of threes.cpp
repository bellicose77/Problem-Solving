#include<bits/stdc++.h>
using namespace std;
bool digits(int n)
{

        int c=n%10;
        if(c==3)
        {
            return false;
        }
       return true;
}
int main()
{
    int t,k;
    cin>>t;
    vector<int>v;
    for(int i =1; i<=2000; i++)
    {
        bool x = digits(i);
        if(i%3!=0)
        {
          if(x==true)
        {
            v.push_back(i);


            }


        }


    }
    /*
    cout<<v[999]<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<< i+1<<"->"<<v[i]<<endl;
    }

    */
        while(t--)
        {
            cin>>k;
            cout<<v[k-1]<<endl;
        }


    return 0;
}
