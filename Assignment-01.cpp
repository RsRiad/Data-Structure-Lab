#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],sum,a,b;
    cout<<"Enter 10 Elements: ";
    for(int i=0; i<10; i++) cin>>arr[i];
    int min_sum =arr[0]+arr[1];
    for(int i=0; i<10-1; i++)
        for(int j=i+1; j<10; j++)
        {
            sum=arr[i]+arr[j];
            if(abs(min_sum)>abs(sum))
            {
                min_sum=sum;
                a=i;
                b=j;
            }
        }

    cout<<"\nTwo Elements Index: "<<a<<" & "<<b<<"\nTheir Sum Close to Zero is : "<<min_sum;

}

