#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_sum(vector<int>v)
{
    cout<<"come"<<endl;
    vector<int>pre;
    pre.push_back(v[0]);
    //cout<<pre[0]<<endl;
    for(int i =1;i<v.size();i++){

       pre.push_back(pre[i-1]+v[i]);

    }
    return pre;
    /*
    for(int i=0;i<pre.size();i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    */
}
int main()
{
    int n,q,x,r,l;
    cin>>n>>q;
    vector<int>v;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    for(int i =0;i<q;i++){
        cin>>l>>r;
       vector<int>result=prefix_sum(v);
       /*
       for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
       }
       cout<<endl;
       */
       if(l==1){
        int res = result[r-1]-0;
        cout<<res<<endl;
       }
       else{
            int res = result[r-1]-result[l-2];
       cout<<res<<endl;

       }


    }

    return 0;
}
