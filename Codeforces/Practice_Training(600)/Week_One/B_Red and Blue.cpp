/*
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
*/
#include<bits/stdc++.h>
using namespace std;
void prefix_sum(vector<int>r,vector<int>b){
   //int su = r[0];
   int su=0;
   int max_su=0;
   for(int i = 0;i<r.size();i++){
    su = su+r[i];
    //r[i]=su;
    max_su=max(max_su,su);
   }
   //int max_r = *max_element(r.begin(),r.end());
   //cout<<max_r<<endl;
   int s =0;
   int max_s=0;
   for(int i=0;i<b.size();i++){
    s+=b[i];
    max_s=max(max_s,s);
   }
   //int max_b = *max_element(b.begin(),b.end());
   int result = max_s+max_su;
  cout<<result<<endl;
}
int main(){
    int t,n,m,x,z;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>r;
        while(n--){
            cin>>x;
            r.push_back(x);
        }
        cin>>m;
        vector<int>b;
        while(m--){
            cin>>z;
            b.push_back(z);
        }
        prefix_sum(r,b);
    }
    return 0;
}

