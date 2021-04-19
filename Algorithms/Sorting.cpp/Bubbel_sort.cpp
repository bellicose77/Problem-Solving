#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>v,int n)
{
    int temp;
    vector<int>::iterator it;
    for(int i=0;i<v.size()-1;i++)
    {

        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n );
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    bubble_sort(v,n);
    return 0;
}
