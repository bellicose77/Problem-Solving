#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={5,6,7,5,4,9};
int *prt = &arr[0];
prt=&arr[0];
cout<<*(prt++)<<endl;
cout<<*(++prt)<<endl;
cout<<*prt<<endl;
return 0;
}
