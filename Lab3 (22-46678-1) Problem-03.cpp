#include<bits/stdc++.h>
using namespace std;
struct Employee
{
    string id;
    int joinyear;
    int sal;

};
int main()
{
    int a=10;
    struct Employee info[a];
    for(int i=0; i<a; i++)
    {
        cout<<"Enter ID: ";
        cin>>info[i].id;
        cout<<"Enter Joining Year: ";
        cin>>info[i].joinyear;
        cout<<"Enter Salary: ";
        cin>>info[i].sal;
        cout<<endl;

    }
    cout<<"\nEmployee Who Fill The Conditions: \n";
    for(int i=0; i<a; i++)
        if(info[i].sal>20000 && info[i].joinyear<2009)
            cout<<"Employee's ID: "<<info[i].id<<endl;


}
