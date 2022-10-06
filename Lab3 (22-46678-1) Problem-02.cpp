#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,temp;
    string arr;

    cout<<"Enter Your Sentence: ";
    getline(cin,arr);

    cout<<"\nYour Sentence is : ";

    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];

    cout<<"\nEnter The Number of Changing Value: ";
    cin>>x;

    for(int i=2;i<arr.size();i+=3)
    {
        temp=arr[i];
        arr[i]=char(temp+x);

    }
    cout<<"\nChanged Sentence : ";

    for(int i=0;i<arr.size();i++)
        cout<<arr[i];


}
