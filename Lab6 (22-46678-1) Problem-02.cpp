#include<bits/stdc++.h>
using namespace std;

class CircularQueue
{

private:
    int rear,front;
    int arr[5];

public:
    CircularQueue()
    {
        rear = -1;
        front = -1;
        for(int i = 0; i<5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if((rear+1)%5==front)
            return true;
        else
            return false;
    }

    void enqueue(int n)
    {
        if(isFull())
            cout<<"Queue is Full\n";
        else if(isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = n;
        }
        else
        {
            rear=(rear+1)%5;
            arr[rear] = n;
        }
    }

    void dequeue()
    {
        if(isEmpty())
            cout<<"Queue is Empty!\n";
        else if(rear == front)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            arr[front]=0;
            front=(front+1)%5;
        }
    }

    void display()
    {
        for(int i = 0; i<5; i++)
        {
            cout<<arr[i]<<"  ";
        }
    }

    int showFront()
    {
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else
            return arr[front];
    }


};

int main()
{
    CircularQueue a;
    a.enqueue(11);
    a.enqueue(10);
    a.enqueue(22);
    a.enqueue(14);
    a.enqueue(52);

    a.display();
    cout<<"\n";
    cout<<"Front element is: "<<a.showFront()<<endl;
    a.dequeue();
    a.dequeue();
    a.display();
    cout<<"\n";
    a.enqueue(1114);
    a.enqueue(5552);
    a.display();



}

