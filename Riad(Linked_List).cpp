#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void addFront(struct Node** head, int node_data)
{
    struct Node* newNode = new Node;
    newNode->data = node_data;
    newNode->next = (*head);
    (*head) = newNode;
}

void insertAfter(struct Node* prev_node, int node_data)
{

    if (!prev_node)
    {
        cout<<"cannot be NULL";
        return;
    }
    struct Node* newNode =new Node;

    newNode->data = node_data;
    newNode->next = prev_node->next;

    prev_node->next = newNode;
}

void addEnd(struct Node** head, int node_data)
{
    struct Node* newNode = new Node;
    struct Node *last = *head;

    newNode->data = node_data;
    newNode->next = NULL;


    if (!(*head))
    {
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    return;
}
void displayList(struct Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<"\t";
        node = node->next;
    }
}


void deletionNode(Node** head,int key)
{
    Node *temp=*head;
    Node * prev=NULL;
    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp!=NULL && temp->data!=key)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            return;
        }
        prev->next=temp->next;
        delete temp;
    }
}


struct Node* head;

int main()
{
    addEnd(&head, 10);

    displayList(head);
    cout<<"\n\n";

    addFront(&head, 20);
    addFront(&head, 30);
    addFront(&head, 100);

    displayList(head);
    cout<<"\n\n";

    addEnd(&head, 40); //
    addEnd(&head, 400);

    displayList(head);
    cout<<"\n\n";

    insertAfter(head->next, 700);

    cout<<"\nLinked list: "<<endl;
    displayList(head);
    cout<<"\n\n";

    //deleteFirstNode(head);
   // displayList(head);

  //  cout<<"\n\n";

    deletionNode(&head,40);
    deletionNode(&head,30);

    displayList(head);
    cout<<"\n\n";
   // removeLastNode(head);

   // displayList(head);
   // cout<<"\n";

    return 0;
}
