/*
#include<bits/stdc++.h>
using namespace std;
int cable(vector<int>v)
{
    int x=30;
    if((v[0]==v[1])&&(v[1]==v[2]))
       {
           return x+(ceil(v[2]/(3*1.0))*3)+2;
       }
    if((v[0]>v[1]) && (v[0]>v[2]))
    {
        return x+v[0];
    }
    else if((v[1]>v[0]) && (v[1]>v[2]))
    {
        return x+(ceil(v[1]/(2))*2)+2;
    }
    else if((v[2]>v[0]) && (v[2])>v[1])
    {
        return x+(ceil(v[2]/(2))*2)+3;
    }
}
int main()
{
    int a,b,c;
    vector<int>v;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    int min_minute=cable(v);
    cout<<min_minute<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,g,b;
    cin>>r>>g>>b;
    int rm=(3* ((r+1)/2))+27;
    int gm=(3*((g+1)/2))+28;
    int bm=(3*((b+1)/2))+29;
    int v=max(rm,gm);
    cout<<max(v,bm)<<endl;
    return 0;
}
/* another one's code
   int ans = 29;
	int cnt = 0;
	while (r + g + b)
	{
		ans++;
		if (cnt == 0)
			r = max(0, r - 2);
		else if (cnt == 1)
			g = max(0, g - 2);
		else
			b = max(0, b - 2);
		cnt++;
		cnt %= 3;
	}
	cout << ans;
}

/// ////
void sol(int r, int g, int b) {
	int solr;
	int solg;
	int solb;
	if (r % 2 == 0)
	{
		solr = (r / 2) * 3;
		if (solr > 0)
		{
			solr -= 3;
		}

	}
	else
	{
		solr = (r / 2 + 1) * 3;
		if (solr > 0)
		{
			solr -= 3;
		}

	}
	if (g % 2 == 0)
	{
		solg = (g / 2) * 3;
		if (solg > 0)
		{
			solg -= 3;
		}
		if (g != 0)
		{
			solg += 1;
		}
	}
	else
	{
		solg = (g / 2 + 1) * 3;
		if (solg > 0)
		{
			solg -= 3;
		}

		if (g != 0)
		{
			solg += 1;
		}
	}
	if (b % 2 == 0)
	{
		solb = (b / 2) * 3;
		if (solb > 0)
		{
			solb -= 3;
		}
		if (b != 0)
		{
			solb += 2;
		}
	}
	else
	{
		solb = (b / 2 + 1) * 3;
		if (solb > 0)
		{
			solb -= 3;
		}
		if (b != 0)
		{
			solb += 2;
		}

	}
	if (solr >= solg && solr >= solb)
	{
		cout << 30 + solr;
	}
	else if (solb >= solg && solb >= solr)
	{
		cout << 30 + solb;
	}
	else if (solg >= solr && solg >= solb)
	{
		cout << 30 + solg;
	}
}

int main()
{
	int r, g, b;
	cin >> r >> g >> b;
	sol(r, g, b);
	/*
	int test;
	cin >> test;
	vector <int> nums;

	while (test--)
	{
		int a;
		cin >> a;
		nums.push_back(a);

	}
	sol(nums);

	*/
	/*

	return 0;
}

*/
