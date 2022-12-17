#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *previousNode;
};
Node *head;
Node *createNode(int value)
{
    Node *newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    newNode->previousNode=NULL;
    return newNode;
}
void insertAthead(int value)
{
    Node *newNode=createNode(value);
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head->previousNode=newNode;
        head=newNode;
    }
}
void insertAttail(int value)
{
    Node *newNode=createNode(value);
    Node *current=head;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newNode;
        newNode->previousNode=current;
    }
}
void insertAtAnyPosition(int position,int value)
{
    Node *newNode=createNode(value);
    Node *current=head;
    Node *current1=head;
    if(position==1)
    {
        newNode->next=head;
        head->previousNode=newNode;
        head=newNode;
    }
    else
    {
        for(int i=1; i<position-1; i++)
        {
            current=current->next;
            current1=current->next;
        }
        newNode->next=current1;
        newNode->previousNode=current;
        current->next=newNode;
        current1->previousNode=newNode;
    }
}
void deleteAttail()
{
    Node *current1=head;
    Node *current2=head;
    while(current1->next!=NULL)
    {
        current2=current1;
        current1=current1->next;
    }
    current2->next=NULL;
    delete current1;
}
void deleteAtfront()
{
    Node *current=head;
    head=head->next;
    head->previousNode=NULL;
    delete current;
}
void deleteAtanyposition(int position)
{
    Node *current1=head;
    Node *current2=head;
    Node *current3=head;
    int count=1;
    while(current1->next!=NULL)
    {
        current1=current1->next;
        count++;
    }
    if(position==1)
    {
        deleteAtfront();
    }
    else if(position==count)
    {
        deleteAttail();
    }
    else
    {
        for(int i=1; i<position-1; i++)
        {
            current1=current1->next;
        }
        current2=current1->next;
        current3=current2->next;
        current1->next=current3;
        current3->previousNode=current1;
        delete current2;
    }
}

void deleteByValue(int n)
{
    Node *current1=head;
    Node *current2=head;
    Node *current3=head;
    int count=0;

    while(current1!=NULL)
    {
        if((current1->data)==n)
        {
            current2=current1->next;
            current3=current2->next;
            current1->next=current3;
            current3->previousNode=current1;
            delete current2;
            return;
        }
        current1=current1->next;
    }
    // if(count!=0) cout<<"Value not found!"<<"\n";

}

int midpoint()
{
    Node *current=head;
    int count=1;
    int mid;
    while(current->next!=NULL)
    {
        current=current->next;
        count++;
    }
    if(count%2!=0)
    {
        mid=count/2;
        return mid+1;
    }
    else
    {
        mid=count/2;
        return mid;
    }



}
void insertAtmid(int value)
{
    Node *newNode=createNode(value);
    Node *current=head;
    Node *current1=head;
    int mid=midpoint();
    for(int i=1; i<mid-1; i++)
    {
        current=current->next;
        current1=current->next;
    }
    newNode->next=current1;
    current->next=newNode;
    newNode->previousNode=current;
    current1->previousNode=newNode;
}
void deleteAtmid()
{
    int mid=midpoint();
    Node *current1=head;
    for(int i=1; i<mid-1; i++)
    {
        current1=current1->next;
    }
    Node *current2=current1->next;
    Node *current3=current2->next;
    current1->next=current3;
    current3->previousNode=current1;
    delete current2;

}

void sortLinkedList()
{
    Node *i=head;
    Node *j=head;

    for(Node *i=head; i!=NULL; i=i->next)
    {
        for(Node *j=i->next; j!=NULL; j=j->next)
        {
            if(i->data>j->data)
            {
                int temp;
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }

}
void show()
{
    Node *current=head;
    while(current!=NULL)
    {
        cout<<current->data<<"  ";
        current=current->next;
    }
    cout<<endl;
}
int main()
{
    head=NULL;
    insertAttail(10);
    insertAttail(5);
    insertAttail(7);
    insertAttail(8);
    insertAttail(6);
    insertAttail(11);
    insertAttail(4);
    cout<<"DLL Before Sort : ";
    show();
    sortLinkedList();
    cout<<"DLL After  Sort : ";
    show();
    deleteAtmid();
    cout<<"DLL Mid Delete  : ";
    show();
    deleteAttail();
    cout<<"DLL Tail Delete : ";
    show();
    deleteAtfront();
    cout<<"DLL Front Delete: ";
    show();
    deleteByValue(6);
    cout<<"DLL After_value Delete: ";
    show();





}
