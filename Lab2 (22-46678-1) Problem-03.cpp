#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the size of Array: ";
    cin>>x;

    int arr[x];
    cout<<"\nInput "<<x<<" Elements into Array: ";
    for(int i=0; i<x; i++)
        cin>>arr[i];

    cout<<"\nArray With Unique Elements: ";
    for(int i=0; i<x; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }

        }
        if (i == j)
            cout << arr[i] <<"  ";

    }

    return 0;
}
