#include<bits/stdc++.h>
using namespace std;

int S[20];
int top=-1;


bool isFull()
{
    return (top==19);
}

bool isEmpty()
{
    return (top==-1);
}

bool push(int value)
{
    if(isFull())cout<<"Stack Overflow! \n";
    else S[++top]=value;
}

void pop()
{
    if(isEmpty())cout<<"Stack is Empty! \n";
    else top--;
}

void display()
{
    if(isEmpty())cout<<"Stack is Empty! \n";
    else
    {
        for(int i=top; i>=0; i--)
            cout<<S[i]<<"  ";
    }
}
void showTop()
{
    if(isEmpty())cout<<"Stack is Empty! \n";
    else cout<<S[top]<<"  ";
}

int main()
{

    push(1);push(5);push(9);push(13);push(17);
    push(2);push(6);push(10);push(14);push(18);
    push(3);push(7);push(11);push(15);push(19);
    push(4);push(8);push(12);push(16);push(20);

    //pop();

    display();
    //showTop();


    return 0;
}
