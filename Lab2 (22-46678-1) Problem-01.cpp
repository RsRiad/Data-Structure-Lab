#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
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

    int m_arr[x+y];

    for(int i=0, j=x-1; i>x,j>=0; i++,j--)
        m_arr[i]=arr1[j];

    for(int i=x, j=y-1; i>(x+y),j>=0; i++,j--)
        m_arr[i]=arr2[j];

    cout<<"\nArray1 & Array2 Merged in Reverse Order:\n";

    for(int i=0; i<x+y; i++)
        cout<<m_arr[i]<<"  ";

    return 0;
}
