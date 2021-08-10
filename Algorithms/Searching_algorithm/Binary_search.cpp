#include<bits/stdc++.h>
using namespace std;
int binary_search_a(vector<int>v)
{
    int x;
    cin>>x; // value to find;
    sort(v.begin(),v.end());
    int low = 0,mid_val_ind;
    int high = v.size()-1;
    //cout<<high<<endl;
    while(low<=high)
    {
        mid_val_ind = low+(high-1)/2;

        if(v[mid_val_ind]==x)
        {
            return  mid_val_ind;
        }

        if(v[mid_val_ind]<x)
        {
            low=mid_val_ind+1;

        }
        else if(v[mid_val_ind]>x)
        {
            high=mid_val_ind - 1;
        }

    }
    return -1;
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        cin>>n;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }
        int index= binary_search_a(v);
        if(index!=-1)
        {
          cout<<"Index of the value and value:"<<index<<" "<<v[index]<<endl;
        }
        else{
            cout<<"Value is not in the vector"<<endl;
        }

    }
    return 0;
}
