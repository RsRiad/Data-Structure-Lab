#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],n,count=0;

    cout<<"Enter 10 Numbers: ";
    for(int i =0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter your desire number : ";
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
            count++;
    }
    cout<<"\nNumber "<<n<<" Count: "<<count<<" Times\n";

    return 0;

}
