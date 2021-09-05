#include<bits/stdc++.h>
using namespace std;
int binary_Search(vector<int>v,int f,int n)
{

    sort(v.begin(),v.end());
    int left = 0;
    int right = n-1;
    while(left<=right)
    {

         int mid = (left + right)/2;
        if(v[mid]==f)
        {
            return mid;
        }
        else if(v[mid]>f)
        {
            left = 0;
            right = mid-1;
        }
        else if(v[mid]<f){
            left = mid+1;
            right = n-1;
        }
    }

   return -1;
}
int main()
{
    int t,n,x,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>f;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
       int index= binary_Search(v,f,n);
       if(index!=-1)
       {
           cout<<"key present at index : "<<index<<endl;
       }
       else{
        cout<<"there is no value"<<endl;
       }
    }
    return 0;
}
