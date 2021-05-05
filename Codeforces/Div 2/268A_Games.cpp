#include<bits/stdc++.h>
using namespace std;
void jersy(int n)
{
    int h,a;
    vector<int>ho;
    vector<int>aw;
    while(n--)
    {
        cin>>h>>a;
        ho.push_back(h);
        aw.push_back(a);
    }
    int c=0;
    for(int i=0;i<ho.size();i++)
    {
        for(int j=0;j<aw.size();j++)
        {
            if(ho[i]==aw[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
int main()
{
    int n;
    cin>>n;
    jersy(n);
    return 0;
}
