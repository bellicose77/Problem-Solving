#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<vector<int>>v)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void magic_table(int row,int col)
{
    int x;
    vector<vector<int>>row_v;
    for(int i=0;i<row;i++)
    {
        vector<int>col_v;
        for(int j=0;j<col;j++)
        {
            cin>>x;
            col_v.push_back(x);
        }
        row_v.push_back(col_v);
    }
    print_vector(row_v);
}
int main()
{
    int row=3,col=3;
    magic_table(row,col);
    return 0;
}
