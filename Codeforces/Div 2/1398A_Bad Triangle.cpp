#include<bits/stdc++.h>
using namespace std;
void bad_triangle(int n)
{
    int x;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

        if(v[0]+v[1]>v[n-1])
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<1<<" "<<2<<" "<<n<<endl;
        }


}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bad_triangle(n);
    }
    return 0;
}
