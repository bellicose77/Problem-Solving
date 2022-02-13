#include<bits/stdc++.h>
using namespace std;
void sorting_paths(int n)
{
    int b=n;
    vector<long long int>v;
    long long int x;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    long long int c=1;
    for(long long int i=0;i<v.size()-1;i++){
        if(v[0]==v[i+1]){
            c++;
        }
    }
    int flag=0;
    for(long long int i=0;i<v.size()-1;i++){
        if(v[0]>=v[i+1]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    //cout<<c<<endl;
    if(c==b){
        cout<<"NO"<<endl;
    }
    else if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sorting_paths(n);
    }

    return 0;
}
