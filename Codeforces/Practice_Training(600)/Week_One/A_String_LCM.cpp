#include<bits/stdc++.h>
using namespace std;
int gcd(int f,int se)
{
    if(f%se==0)
    {
        return se;
    }
    else{
        return gcd(se,f%se);
    }
}
int lcm(int u,int v)
{
    int mul = u*v;
    int gc = gcd(u,v);
    return (mul/gc);

}
int main()
{
    int t;
    cin>>t;
    string s;
    string x;
    while(t--)
    {
        cin>>s>>x;
        int s_len = s.size();
        int x_len =x.size();
        int l = lcm(s_len,x_len);
        //cout<<l<<endl;
        string first;
        string second;
        int ff = l/s_len;
        int ss = l/x_len;
        while(ff--){
            first.append(s);
        }
        while(ss--){
            second.append(x);
        }


        if(first==second){
            cout<<first<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
