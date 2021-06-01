#include<bits/stdc++.h>
using namespace std;
void unique_digit(int l,int r)
{
    for(int i=l; i<=r; i++)
    {
        int k=i;
        vector<int>v;
        while(k!=0)
        {
            int g=k%10;
            v.push_back(g);
            k/=10;
        }
        sort(v.begin(),v.end());
        int flag=0;
        for(int j=0; j<v.size()-1; j++)
        {
            if(v[j]==v[j+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
            break;

        }
        else
        {
            if(i+1>r)
            {
                cout<<-1<<endl;
            }
        }

    }

}
int main()
{
    int l,r;
    cin>>l>>r;
    unique_digit(l,r);

    return 0;
}
