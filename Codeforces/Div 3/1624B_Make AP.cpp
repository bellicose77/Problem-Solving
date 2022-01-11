#include<bits/stdc++.h>
using namespace std;
/*
bool ap(int a,int b,int c)
{
    int sm = min({a,b,c});
    if(a==c){
        return true;
    }
    if((a==1 && b==1 && c%2==0) || (a%2==0 && b==1 && c==1)){
        return false;
    }
    if(a%sm==0 && b%sm==0 && c%sm==0){
        return true;
    }
    else{
        return false;
    }

}
*/
bool ap(int a,int b,int c){

        int ab = abs(b-a);
        int bc =abs(c-b);
        int tb = (2*b)-c;
        int tba = (2*b)-a;

         if((tb>0) && (tb%a==0)){
            return true;
        }
        else if((a+c)%(2*b)==0){
            return true;
        }
        else if(tba>0 && tba%c==0 ){
            return true;
        }
        else{
            return false;
        }
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        bool result = ap(a,b,c);
        if(result)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
