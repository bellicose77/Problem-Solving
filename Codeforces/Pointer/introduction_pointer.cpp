#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;  //It will print value of a variable which p pointed

    cout<<p<<endl;
      // it show of address of variable which p pointed
      */
      double *p;
      double q,temp;
      temp=123.23;
      p=&temp;
      q=*p;
      cout<<q<<endl;
return 0;
}
