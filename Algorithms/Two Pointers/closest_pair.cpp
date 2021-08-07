#include<bits/stdc++.h>
using namespace std;
void closet_pair(vector<int>v,int f)
{
    sort(v.begin(),v.end());
    int diff = INT_MAX;
    int val1,val2;
    int i=0,j=v.size()-1;
    while(i<j)
    {
        int sum = v[i] + v[j];
        if(abs(sum-f)<diff)
        {
            val1 = i;
            val2 = j;
            diff = abs(sum-f);
        }
        if(sum > f)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<v[val1]<< " "<<v[val2]<<" "<<v[val1]+v[val2]<<endl;

}
int main()
{
    int n,x,f;
    cin>>n>>x;
    vector<int>v;
    while(n--)
    {
        cin>>f;
        v.push_back(f);
    }
    closet_pair(v,x);
    return 0;
}
