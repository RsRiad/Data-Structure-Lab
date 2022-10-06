#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,y,i,j;

    cout<<"Enter the Number of Row: ";
    cin>>x;
    cout<<"\nEnter the Number of Coll: ";
    cin>>y;
    int mat[x][y];
    cout<<"Enter The Elements:\n";
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            cin>>mat[i][j];

    cout<<"Normal Matrix: \n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<"\nTranspose Matrix: \n";
    for(j=0;j<y;j++)
    {
        for(i=0;i<x;i++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }

}
