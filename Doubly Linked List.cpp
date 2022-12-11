#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node* head;

Node* GetNewNode(int x)
{
    Node* NewNode = new Node();
    NewNode->data = x;
    NewNode->next = NULL;
    NewNode->prev = NULL;
    return NewNode;
}

void InsertAtHead(int x)
{
    Node* NewNode = GetNewNode(x);
    if (head == NULL)
    {
        head = NewNode;
        return;
    }
    head->prev = NewNode;
    NewNode->next = head;
    head = NewNode;
}

void InsertAtTail(int x)
{
    Node* NewNode = GetNewNode(x);
    Node* temp = head;
    if (head == NULL)
    {
        head = NewNode;
        return;
    }
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = NewNode;
    NewNode->prev = temp;
}
void InsertBeforeGivenNode(int n, int x)
{
    Node* NewNode = GetNewNode(x);
    Node* temp1 = head;
    for (int i=1; 1<n-1; i++)
    {
        temp1 = temp1->next;
    }
    Node* temp2=temp1->next;
    temp1->next = NewNode;
    NewNode->prev = temp1;
    NewNode->next = temp2;
    temp2->prev=NewNode;
}


void Delete(int n)
{
    Node* temp = head;
    if (n == 1)
    {
        head = temp->next;
        head->prev = NULL;
        delete temp;
        return;
    }

    for (int i=1; i<n-1; i++)
    {
        temp = temp->next;
    }
    Node* temp2;
    temp2 = temp;
    temp2 = temp2->next;
    Node* temp3;
    temp3 = temp2;
    temp2 = temp2->next;
    temp2->prev = temp;
    temp->next = temp2;
    delete temp3;
}



void Traverse()
{
    Node* temp = head;
    if (head == NULL)
    {
        cout << "Error: List is Empty " << endl;
        return;
    }
    cout << "Traverse List: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()

{
    InsertAtHead(1);
    InsertAtHead(2);
    InsertAtHead(3);
    Traverse();
    InsertAtHead(4);
    InsertAtHead(5);
    InsertAtHead(6);
    Traverse();
    Delete(2);
    Traverse();
    InsertBeforeGivenNode(2, 10);
    Traverse();

}
