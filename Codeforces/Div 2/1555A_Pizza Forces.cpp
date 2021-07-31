#include<bits/stdc++.h>
using namespace std;
/*
  other's code
   n=(n+1)/2;
        if(n<=3)
        {
            n=3;
        }

       //cout<<n<<endl;

        cout <<(5 * n) << endl;

        Another one

         if(n<=6)
         {
             cout<<15<<endl;
         }
        if(n>6)
        {
            long long int x=n/6;
            long long int y=n%6;
            if(y==0)
            {
                cout<<x*15<<endl;
            }
            else if(y<=2)
            {
                cout<<x*15+5<<endl;
            }
            else if(y<=4)
            {
                cout<<x*15+10<<endl;
            }
            else
            {
                x++;
                cout<<x*15<<endl;
            }
        }

*/

/*
  another one
   cin>>n;

	if(n<=6){
		cout<<15<<endl;
		return;
	}

	// code goes here
	int x = n/6;

	if(n%6==0){
		cout<<15*x<<endl;
	}
	else if(n%6<=2){
		x--;
		cout<<15*x+20<<endl;
	}
	else if(n%6<=4){
		x--;
		cout<<15*x+25<<endl;
	}
	else{
		x++;
		cout<<15*x<<endl;
	}
	*/

/* boss one
if(n<=6){
        cout<<15<<nl;
    }else{
        n=(n+1)/2;
        cout<<n*5<<nl;
    }

     while(t--)
  {
    int n;
    cin>>n;
    if (n%6==0) cout<<(n/6)*15<<endl;
    else if (n%8==0) cout<<(n/8)*20<<endl;
    else if (n%10==0) cout<<(n/10)*25<<endl;
    else if (n<6) cout<<15<<endl;
    else
    {
      if (n%2)
      {
        int x=n/6;
        int x1=n-(x*6);
        if (x1==1) cout<<(x-1)*15+20<<endl;
        else if (x1==3) cout<<(x-1)*15+25<<endl;
        else cout<<(x-1)*15+30<<endl;
      }
      else
      {
        int x=n/6;
        int x1=n-(x*6);
        if (x1==2) cout<<(x-1)*15+20<<endl;
        else cout<<(x-1)*15+25<<endl;
      }
    }
  }
}
 */



long long int pizza(long long int n)
{
    if(n<=6)
    {
        return 15;
    }
    else if(n>= 7 && n<=8)
    {
        return 20;
    }
    else if(n>=9 && n<=10)
    {
        return 25;
    }
    else
    {
        long long int res;
        int r=n%10;
        if(r==1 || r==2)
        {
          res=(((n/10)-1)*25)+30;
          return res;
        }
        else if(r==3 || r==4)
        {
            res=(((n/10)-1)*25)+35;
            return res;
        }
        else if(r==5 || r==6)
        {
            res=(((n/10)-1)*25)+40;
            return res;
        }
        else if(r==7 || r==8)
        {
            res=(((n/10)-1)*25)+45;
            return res;
        }
        else if(r==9)
        {
            res=(((n/10)-1)*25)+50;
            return res;
        }
        else
        {
            res=(n/10)*25;
            return res;
        }
    }
}
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int res=pizza(n);
        cout<<res<<endl;
    }
    return 0;
}
