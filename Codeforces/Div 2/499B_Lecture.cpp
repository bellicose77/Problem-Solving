#include<bits/stdc++.h>
using namespace std;
/* other's code
  while (m--) {
		string s1, s2;
		cin >> s1 >> s2;
		mp1[s1] = s2;
	}
	while (n--) {
		string s;
		cin >> s;
		if (s.length() <= mp1[s].length()) cout << s << " ";
		else cout << mp1[s] << " ";

    another one
     long long n,m,ct=0;
   cin>>n>>m;
   string a[m];
   string b[m];
   for(int i=0;i<m;i++)
   {
       cin>>a[i];
       cin>>b[i];
   }
   string c[n];
   for(int i=0;i<n;i++)
    cin>>c[i];

   for(int i=0;i<n;i++)
   {
       string word = c[i];
       for(int j=0;j<m;j++)
       {
           if(word==a[j])
           {
               string one=a[j];
               string two=b[j];
               if(one.length()>two.length())
                cout<<b[j]<<" ";
               else
                cout<<a[j]<<" ";
           }
       }
   }
}
  */
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    map<string,string>:: iterator it;
    string s,s1;
    while(m--)
    {
        cin>>s>>s1;
        if(s.length()<=s1.length())
        {
            mp[s]=s;
        }
        else
        {
            mp[s]=s1;
        }
    }
    /*
    cout<<mp["codeforces"]<<endl;
    cout<<mp["contest"]<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    */


    string s2;
    for(int i=0;i<n;i++)
    {
        cin>>s2;
        cout<<mp[s2]<<" ";
    }
    cout<<endl;

    return 0;
}
