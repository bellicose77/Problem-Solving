#include<bits/stdc++.h>
/* other codes
   if(before >= 2400 && after > before){
            k = 1;
        }
    }
    if(k == 1){
        cout << "YES";
    }
    else cout << "NO";
        */
/* another
    if (a >= 2400 && b - a > 0) {
            good = true;
        }
    }

    cout << (good ? "YES" : "NO") << nl;
*/
using namespace std;
int main()
{
    int t,x,y,c=0;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;
        cin>>x>>y;
        if(x>=2400 && y>x)
        {
            c++;
        }
    }
    if(c>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
