#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,3,5,3,11,15,16,25,31,42,44,47,53};
    cout<<"Array in Normal Order  : ";
    for(int i=0;i<13;i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<"\n\nArray in Reverse Order: ";
    for(int i=12;i>=0;i--)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

}
