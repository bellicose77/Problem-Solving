#include<bits/stdc++.h>
using namespace std;

void prefix_sum(vector<int>v)
{
    int sum = v[0];
    for(int i =1;i<v.size();i++)
    {
        sum=v[i-1]+v[i];
        v[i]=sum;
        //cout<<v[i];
    }
    /*
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    */
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    /*
    v[0]=0;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    */
    prefix_sum(v);
    return 0;
}
