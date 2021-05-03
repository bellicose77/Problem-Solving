#include<bits/stdc++.h>
using namespace std;
/*
 int n;
	cin >> n;
	int arr[n][2];
	for(int i=0; i<n; i++) {
		for(int j=0; j<2; j++) {
			cin >> arr[i][j];
		}
	}

	int min, sum_arr[n], ans;
	for(int j=1; j<n; j++) {
		int sum=0;
		for(int k=0; k<j; k++) {
			sum += arr[k][1] - arr[k][0];
			min = sum;
		}
		sum_arr[j-1] = min;
		ans = *max_element(sum_arr, sum_arr+n-1);
	}
	cout << ans;

*/
void capacity(int n)
{
    int x,y,d;
    vector<int>a;
    vector<int>b;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>y;
        a.push_back(x);
        b.push_back(y);
    }

    int f=b[0];
    ans.push_back(f);
    for(int i=0;i<a.size()-1;i++)
    {

        d=abs(ans[i]-a[i+1])+ b[i+1];
        ans.push_back(d);
    }
    cout<<*max_element(ans.begin(),ans.end());
}
int main()
{
    int n;
    cin>>n;
    capacity(n);
    return 0;
}
/*
int n,total=0,max=0;
    scanf("%d",&n);
    int arry[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arry[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(j==0)
            total=total-arry[i][j];
            else
            total=total+arry[i][j];

            if(total>max)
            max=total;
        }
    }
    printf("%d", max);

*/
