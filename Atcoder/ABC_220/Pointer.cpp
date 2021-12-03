#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int *p,q;
    q=19;
    p=&q;
    cout<<"Value of Q using pointer:"<<*p<<endl;
    cout<<"address of Q:"<<p<<endl;
    */
    int q;
    double *fp;
    fp = &q;
    *fp = 100.23;
    cout<<q<<endl;
return 0;
}
