#include<bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[7]= {8,5,4,6,1,11,3};
    for(int i=0; i<7-1; i++)
        for(int j=0; j<7-i-1; j++)
            if(myArray[j]>myArray[j+1])
                swap(myArray[j],myArray[j+1]);

    for(int i=0; i<7; i++)
        cout<<myArray[i]<<"\t";


    return 0;
}
