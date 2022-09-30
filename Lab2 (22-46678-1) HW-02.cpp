#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inputArray[10], countArray[10];
    int i, j, count;

    cout<<"Enter 10 numbers: ";
    for(i = 0; i < 10; i++)
    {
        cin>>inputArray[i];
        countArray[i] = -1;
    }

    for(i = 0; i < 10; i++)
    {
        count = 1;
        for(j = i+1; j < 10; j++)
        {
            if(inputArray[i]==inputArray[j])
            {
                countArray[j] = 0;
                count++;
            }
        }
        if(countArray[i]!=0)
        {
            countArray[i] = count;
        }
    }

    for(i = 0; i<10; i++)
    {
        if(countArray[i] != 0)
        {
            cout<<"Element "<<inputArray[i]<<" : Count "<<countArray[i]<<endl;
        }
    }

    return 0;
}
