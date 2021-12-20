#include<bits/stdc++.h>
using namespace std;
void number_box()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ne=0,sum=0;
    int Min=1000;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           Min= min(Min,abs(arr[i][j]));
        }
    }
    //cout<<Min<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=abs(arr[i][j]);

            if(arr[i][j]<0){
            ne++;
           }
        }

    }
    if(ne%2==0){
        cout<<sum<<endl;
    }
    else{
        sum=sum-abs(Min*2);
        cout<<sum<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        number_box();
    }
    return 0;
}
