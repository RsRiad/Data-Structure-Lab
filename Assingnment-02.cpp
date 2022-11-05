#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][6];
    int n,flag=0;
    cout<<"Input Array Elements: ";
    for(int row=0; row<3; row++)
        for(int col=0; col<6; col++)
            cin>>arr[row][col];

    cout<<"\nArray is: \n";
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<6; col++)
        {
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nEnter Desire Element: ";
    cin>>n;
    for(int row=0; row<3; row++)
        for(int col=0; col<6; col++)
        {
            if(arr[row][col]==n)
            {
                cout<<"Index [ "<<row<<" ][ "<<col<<" ]\n";
                flag=1;
                break;
            }
        }
    if(flag==0) cout<<"Element Not Found!";

    return 0;
}

