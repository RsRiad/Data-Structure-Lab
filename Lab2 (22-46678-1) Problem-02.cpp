#include<bits/stdc++.h>
using namespace std;
int main()
{
    int found,k=0,x;
    int arr1[10];
    int arr2[10];
    int arr[50];

    cout<<"\nInput 10 Elements into Array1: ";
    for(int i=0; i<10; i++)
        cin>>arr1[i];

    cout<<"\nInput 10 Elements into Array2: ";
    for(int i=0; i<10; i++)
        cin>>arr2[i];

    for(int i=0; i<10; i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr1[i]==arr2[j])
            {
                found = 0;
                for(x=0; x<k; x++)
                {
                    if(arr1[i]==arr[x])
                        found++;
                }

                if(found==0)
                {
                    arr[k] = arr1[i];
                    k++;
                }
            }
        }
    }
    cout<<k<<" Common Elements: ";
    for(int i=0; i<k; i++)
        cout<<arr[i]<<" ";

    if(k==0)
        cout<<"\nNo Common Elements Found";
    return 0;

}
