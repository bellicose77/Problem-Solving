#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s;
        cin>>s;
        while(m--)
        {
            for(int i=0;i<s.size();i++)
            {
                int c=0;
                if(s[i]=='0')
                {
                    if(s[i-1]=='1')
                    {
                        c++;
                    }
                    else if(s[i+1]=='1')
                    {
                        c++;
                    }
                }
                if(c==1)
                {
                    int x=(int)s[i];
                    x++;

                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
