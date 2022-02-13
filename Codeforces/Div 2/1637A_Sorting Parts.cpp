#include<bits/stdc++.h>
using namespace std;
void sorting_paths(int n)
{

    int b=n;
    vector<long long int>v;
    vector<long long int>v1;
    long long int x;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        v1.push_back(v[i]);
    }
    sort(v1.begin(),v1.end());
    int ma = *max_element(v.begin(),v.end());
    int mi = *min_element(v.begin(),v.end());
    int flag=0;
    for(int i=0;i<v1.size()-1;i+=2){
            if(v1[i]-v[i+1]==0){
                flag=1;
                break;
            }

    }
    if(mi==v[0] && flag==0){
        cout<<"NO"<<endl;
    }
    else if(ma==v[b-1] && flag==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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
