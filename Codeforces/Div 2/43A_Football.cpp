#include<bits/stdc++.h>
using namespace std;
/* other person code
  int n;
    cin>>n;
    string s[130];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n);
    cout<<s[n/2];
*/
/*
  using map
   void solve(){
	int n;
	cin >> n;
	map<string,int>mp;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		mp[s]++;
	}
	string s;int mx = 0;
	for(auto i : mp){
		if (i.second > mx){
			s = i.first;
			mx = i.second;
		}
	}
	cout << s << "\n";
}
*/
void football(int n)
{
    string x;
    vector<string>v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    string a=v[0];
    int c=1,d=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1]==a)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(c>d)
    {
        cout<<a<<endl;
    }
    else
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=a)
            {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    football(n);
    return 0;
}
