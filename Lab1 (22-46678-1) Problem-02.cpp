#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {2,3,5,3,11,15,16,25,31,42,44,47,53};
    cout<<"Even Number: ";
    for(int i=0; i<13; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"  ";
        }
    }

    cout<<"\n\nOdd Number: ";
    for(int i=0; i<13; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"  ";
        }
    }
    cout<<endl;
}
