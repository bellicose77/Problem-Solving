/*
//I'm a fucking gadda. mathai velocity nai
#include<bits/stdc++.h>
using namespace std;
void triangle(vector<int>v)
{
    if(((v[0]+v[1])>v[2]) && ((v[0]+v[2])>v[1]) && ((v[1]+v[2])>v[0]) && ((v[0]+v[1])>v[3]) && ((v[0]+v[3])>v[1]) && ((v[1]+v[3])>v[0]) && ((v[0]+v[2])>v[3]) && ((v[0]+v[3])>v[2]) && ((v[2]+v[3])>v[0]) && ((v[1]+v[2])>v[3]) && ((v[1]+v[3])>v[2]) && ((v[2]+v[3])>v[1]))
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(((v[0]+v[1])==v[2])||((v[0]+v[2])==v[1]) || ((v[1]+v[2])==v[0]) || ((v[0]+v[1])==v[3]) || ((v[0]+v[3])==v[1]) || ((v[1]+v[3])==v[0]) ||((v[0]+v[2])==v[3]) || ((v[0]+v[3])==v[2]) || ((v[2]+v[3])==v[0]) ||((v[1]+v[2])==v[3]) ||((v[1]+v[3])==v[2]) ||((v[2]+v[3])==v[1]))
    {
        cout<<"SEGMENT"<<endl;
    }

    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    triangle(v);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
/*
   other's code
   if (a[0] + a[1] > a[2] || a[0] + a[1] > a[3] || a[1] + a[2] > a[3] || a[0] + a[2] > a[3])
    {
        cout << "TRIANGLE" << endl;
        return 0;
    }
    if (a[0] + a[1] == a[2] || a[0] + a[1] == a[3] || a[1] + a[2] == a[3] || a[0] + a[2] == a[3])
    {
        cout << "SEGMENT" << endl;
        return 0;
    }
    cout << "IMPOSSIBLE" << endl;
*/
bool tria(int a,int b,int c)
{
    if((a+b>c) && (a+c)>b && (b+c)>a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool seg(int a,int b,int c)
{
    if((a+b==c) || (a+c)==b || (b+c)==a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a,b,c,d;
    bool triangle=false;
    bool segment=false;
    cin>>a>>b>>c>>d;
    triangle= triangle || (tria(a,b,c));
    triangle= triangle || (tria(a,b,d));
    triangle= triangle || (tria(a,c,d));
    triangle= triangle || (tria(b,c,d));

    segment= segment || (seg(a,b,c));
    segment= segment || (seg(a,b,d));
    segment= segment || (seg(a,c,d));
    segment= segment || (seg(b,c,d));

    if(triangle)
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(segment)
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;

    }

    return 0;
}

