/*
#include<bits/stdc++.h>
using namespace std;
void swap_sort(int n){
    long long int x;
    vector<long long int>v;
    int even=0,odd=0;
    while(n--){
        cin>>x;
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
        v.push_back(x);
    }
    int flag=0;
    for(int i=0;i<v.size()-1;i++){

        if(v[i]>v[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else if(even==b){
        cout<<"NO"<<endl;
    }
    else if(odd==b){
        cout<<"NO"<<endl;
    }
    else{


    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        swap_sort(n);
    }
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
void swap_pair(int n)
{
    int x;
    vector<int>v;
    vector<int>v1;
    vector<int>even;
    vector<int>odd;
    while(n--)
    {
        cin>>x;
        if(x%2==0){
            v.push_back(x);
            even.push_back(x);
        }
        else{
            v1.push_back(x);
            odd.push_back(x);
        }
    }
   sort(v.begin(),v.end());
   sort(v1.begin(),v1.end());
   if(v==even && v1==odd){
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
        swap_pair(n);
    }
    return 0;
}
