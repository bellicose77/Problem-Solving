#include<bits/stdc++.h>
using namespace std;
void permutation(int n)
{
    if(n%2==0)
    {
        //cout<<"if-working"<<endl;
        vector<int>v;
        for(int i=n; i>=1; i--)
        {
            v.push_back(i);
        }
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                for(int i=0; i<v.size(); i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                swap(v[i-1],v[i]);
                for(int i=0; i<v.size(); i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;


            }


        }


    }
    else
    {
        int x=n-1;
        vector<int>v1;
        for(int i=n; i>=1; i--)
        {
            v1.push_back(i);
        }
        if(n==3)
        {
            cout<<3<<" "<<2<<" "<<1<<endl;
            cout<<3<<" "<<1<<" "<<2<<endl;
            cout<<2<<" "<<3<<" "<<1<<endl;
            /*
            for(i=0; i<n; i++)
            {
                if(i==0)
                {
                    for(int i=0; i<v1.size();i++){
                        cout<<v1[i]<<" ";
                    }
                    cout<<endl;

                }
            }
            */
        }
        else{
                 vector<int>la=v1;
        /*
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        */


        for(int i=0; i<n-1; i++)
        {
            if(i==0)
            {
                for(int i=0; i<v1.size(); i++)
                {
                    cout<<v1[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                swap(v1[i],v1[i+1]);
                for(int i=0; i<v1.size(); i++)
                {
                    cout<<v1[i]<<" ";
                }
                cout<<endl;


            }

        }
        int u=la.size();
        swap(la[u-1],la[n-2]);
        for(int i=0; i<la.size(); i++)
        {
            cout<<la[i]<<" ";
        }
        cout<<endl;

        }




    }
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        permutation(n);
    }
    return 0;
}
