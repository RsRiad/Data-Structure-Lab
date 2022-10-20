#include<bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[7]= {8,5,4,6,1,11,3};
    int n,flag=0;
    cout<<"Enter Your Desire Number : ";
    cin>>n;

    for(int i=0; i<7; i++)
        if(myArray[i]==n)
        {
            flag++;
            cout<<n<<" found in "<<i+1<<" position";
        }
    if(flag==0) cout<<"Not found!";


    return 0;
}
