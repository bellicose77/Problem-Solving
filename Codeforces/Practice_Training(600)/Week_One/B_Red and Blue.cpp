#include<bits/stdc++.h>
using namespace std;
void final_array(vector<int>r,vector<int>b,int big)
{
    vector<int>mixed;
   // cout<<big<<endl;

    for(int i =0; i<big; i+=1)
    {
        //cout<<"value is coming"<<endl;
        //mixed[i]=r[i];
        //cout<<r[i]<<endl;
        mixed.push_back(r[i]);
        mixed.push_back(b[i]);
        //mixed[i+1]=b[i];
       //cout<<i<<":"<<mixed[i]<<endl;
    }
    /*
    for(int i=0;i<mixed.size();i++){
        cout<<mixed[i]<<" ";
    }
    cout<<endl;
    */
    vector<int>result;
    result.push_back(0);
    result.push_back(mixed[0]);
    int sum = result[1];

    for(int i =1;i<mixed.size();i++)
    {
        sum+=mixed[i];
        result.push_back(sum);
    }
    /*
    for(int i =0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    */
    cout<<*max_element(result.begin(),result.end())<<endl;
}
int main()
{
    int t,n,m,a,x;
    cin>>t;
    while(t--)
    {
        vector<int>r;
        vector<int>b;
        cin>>n;
        while(n--)
        {
            cin>>a;
            r.push_back(a);
        }
        cin>>m;
        while(m--)
        {
            cin>>x;
            b.push_back(x);
        }
        int big = max(r.size(),b.size());
        final_array(r,b,big);
    }
    return 0;
}
