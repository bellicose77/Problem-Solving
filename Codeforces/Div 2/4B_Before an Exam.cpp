#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,tot;
    cin>>d>>tot;
    int mi,ma;
    set<int>s;
    while(d--)
    {
        cin>>mi>>ma;
        for(int i=mi;i<=ma;i++)
        {
            s.insert(i);
        }
    }
     vector<int>v;
     int sum=0;
     for(auto el:s)
        {
            sum+=el;
            v.push_back(sum);

        }
        int flag=0,min_v,max_v;
        for(int i=0;i<v.size()-1;i++)
        {
            if(tot==(v[i]+v[i+1]))
            {
                min_v=v[i];
                max_v=v[i+1];
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else if(flag==1)
        {
            cout<<"YES"<<endl;
            cout<<min_v<<" "<<max_v<<endl;
        }

    return 0;
}
