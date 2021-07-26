#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        vector<int>v;
        cin>>s;
        sort(s.begin(),s.end());
        //cout<<s<<endl;

        for(int i=0;i<s.size();)
        {
            int c=1;
            for(int j=i+1;j<s.size()-1;j++)
            {
                if(s[i]==s[j])
                {
                    c++;
                }
            }
            //cout<<c<<endl;
            v.push_back(c);
            if(c>1)
            {
                i+=c;
            }
            else
            {
                i++;
            }

        }
        /*
        for(auto u:v)
        {
            cout<<u<<" ";
        }
        cout<<endl;
        */
        int si=0,d=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                si++;
            }
            else
            {
                d++;
            }
        }
        //cout<<"si: "<< si<<" "<<d<<endl;
        cout<<(si/2)+d<<endl;
    }
    return 0;
}
