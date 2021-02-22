#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int flag=0;

    for(int i=0;i<=a.length();i+=2)
    {
        if((i+1)%2!=0){

            if('a[i]'>=65 && 'a[i]'<=90)
            {

                flag+=1;
                break;
            }
        }
        else{
            if('a[i]'>=97 && 'a[i]'<=122)
            {

                flag+=1;
                break;
            }

        }
    }

    if(flag==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
