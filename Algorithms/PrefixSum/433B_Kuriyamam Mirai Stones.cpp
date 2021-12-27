#include<bits/stdc++.h>
using namespace std;
/* sorting problem
vector<double> stones(vector<double>v,double l,double r)
{
    vector<double>prefix;
    prefix.push_back(v[0]);
    for(int i=1; i<v.size(); i++)
    {
        prefix.push_back(prefix[i-1]+v[i]);
    }
    return prefix;

}
*/
vector<long long int > stones(vector<long long int>c,long long int l,long long int  r,long long int o)
{
    vector<long long int >prefix;
    if(o==1){
        prefix.push_back(c[0]);
        for(long long int  i=1;i<c.size();i++){
            prefix.push_back(prefix[i-1]+c[i]);
        }
        return prefix;
    }
    else{
        sort(c.begin(),c.end());
         prefix.push_back(c[0]);
        for(long long int  i=1;i<c.size();i++){
            prefix.push_back(prefix[i-1]+c[i]);
        }
        return prefix;

    }
}
int main()
{
    long long int n,q,l,r,o;
    cin>>n;
    vector<long long int>v(n);
    for(long long int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>o>>l>>r;
        long long int res;
        vector<long long int> result;
        if(o==1)
        {
          result= stones(v,l,r,o);
            if(l==1)
            {
                res = result[r-1];
                cout<<res<<endl;

            }
            else
            {
                 res = result[r-1]-result[l-2];
                //cout<<result[r-1]<<" "<<result[l-2]<<endl;
                cout<<res<<endl;


            }

        }
        else
        {
             result = stones(v,l,r,o);
            if(l==1)
            {
                res = result[r-1];
                cout<<res<<endl;

            }
            else
            {
                res = result[r-1]-result[l-2];
                cout<<res<<endl;


            }
        }
        /*
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        */

    }
    return 0;
    /*
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    */

}
