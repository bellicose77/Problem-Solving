#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string ,string>mp;
    map<string,string>:: iterator it;
    int n,t;
    string s,s1;
    cin>>n>>t;
    while(t--)
    {
        cin>>s>>s1;
        //  mp[n]=s;  //inserting value

        // using insert function
        mp.insert({s,s1});
    }

    //remove element
   // mp.erase(mp.begin(),mp.find(3));
    /* print a map
    for(it =mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    */
    // another way to print a map using auto key word;
    for(auto m:mp)
    {
        cout<<m.first<<" "<<m.second<<endl;
    }

    return 0;
}
