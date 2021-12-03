#include<bits/stdc++.h>
using namespace std;
void foo(int i){
if(i>1)
    {
        foo(i/2);
        foo(i/2);
    }
    cout<<"*"<<endl;
}
int main(){
    int n=4;
    foo(n);
return 0;
}
