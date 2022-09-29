#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,found=0;
    cout<<"Enter the size of Array1: ";
    cin>>x;

    int arr1[x];
    cout<<"\nInput "<<x<<" Elements into Array1: ";
    for(int i=0; i<x; i++)
        cin>>arr1[i];

    cout<<"\nEnter the size of Array2: ";
    cin>>y;

    int arr2[y];
    cout<<"\nInput "<<y<<" Elements into Array2: ";
    for(int i=0; i<y; i++)
        cin>>arr2[i];

    cout<<"\nCommon Elements: ";
    for(int i=0,j=0; i<x,j<y; i++,j++)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<"  ";
            found++;
        }
    }
    if(found==0)
        cout<<"\nNo Common Elements Found!";


    return 0;
}
