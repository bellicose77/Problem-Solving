#include<bits/stdc++.h>
using namespace std;
void fun(const int *p)
{
    *p=1;
    cout<<*p<<endl;
}
int main(){
/*
int arr[]={5,6,7,5,4,9};
int *prt = &arr[0];
prt=&arr[0];
cout<<*(prt++)<<endl;
cout<<*(++prt)<<endl;
cout<<*prt<<endl;
*/
const int i=10;
cout<<&i<<endl;
fun(&i);
return 0;
}
