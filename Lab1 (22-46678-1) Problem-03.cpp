#include<bits/stdc++.h>
using namespace std;


int arr[]= {1,2,4,10,15,19,20,22,25,29,31,37,66};
int i;
void oddFinder(int a, int b)
{
    cout<<"\nOdd Numbers: ";

    for(int i=0; i<13; i++)
    {
        for(int j=a; j<=b; j++)
        {
            if(arr[i]==j&&j%2!=0)
            {
                cout<<j<<" ";
            }
        }
    }


    cout<<endl;

}

int main()
{
    int a,b;
    cout<<"Enter Initial Value of Range: ";
    cin>>a;
    cout<<"Enter Terminal Value of Range: ";
    cin>>b;
    oddFinder(a,b);

    return 0;

}


