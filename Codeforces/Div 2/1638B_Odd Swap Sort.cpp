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
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    vector<int>ev;
    vector<int>od;

    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            ev.push_back(v[i]);
        }
        else{
            od.push_back(v[i]);
        }
    }
    int flag=0;
    for(int i=0;i<ev.size();i++){
        if(ev[i]>v[i+1]){
            flag=1;
            break;
        }
    }
    int f=0;
    for(int i=0;i<od.size();i++){
        if(od[i]>od[i+1]){
            f=1;
            break;
        }
    }
    if(flag== 0 && f==0){
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
