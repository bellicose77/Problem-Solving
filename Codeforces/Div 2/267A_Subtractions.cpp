/*
  Time limit excced code

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a,b,c;
    while(n--)
    {
        c=0;
        cin>>a>>b;
        while(((a>0)&& (b>0)))
        {
            if(a<b)
            {
                b=b-a;
                c++;
            }
            else
            {
                a=a-b;
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;

}
*/
#include<bits/stdc++.h>
using namespace std;
int subtract(int a,int b)
{
    int re;
    int ma=max(a,b);
    int mi=min(a,b);
    if(ma%mi==0)
    {
        return(ma/mi);
    }
    else
    {
        int s=0;
        while(ma%mi!=0)
        {
            s+=ma/mi;
            re=ma%mi;
            ma=mi;
            mi=re;
        }
        s+=ma/mi;
        return s;
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int x=subtract(a,b);
        cout<<x<<endl;
    }
    return 0;
}
/*  other person's code
   while(a>0&&b>0)
        {
            if(a>=b)
            {
                c=c+a/b;
                a=a%b;
            }
            else
            {
                c=c+b/a;
                b=b%a;
            }
        }
        cout<<c<<endl;

        another one
        int getSteps(int x, int y) {
	if(x == 0 || y == 0)
		return 0;

	if(x == y)
		return 1;
	else if(x > y)
		return (x / y) + getSteps(x % y, y);
	else
		return (y / x) + getSteps(x, y % x);
}

void solve() {
	// Write your code here

	int A, B;
	cin >> A >> B;

	cout << getSteps(A, B) << endl;

}
*/
