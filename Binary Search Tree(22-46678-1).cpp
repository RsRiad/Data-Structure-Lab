#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode* left;
    TreeNode *right;

    TreeNode()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class BinarySearchTree
{
public:
    TreeNode* root;
    BinarySearchTree()
    {
        root = NULL;
    }

    void insertNode(TreeNode* new_Node)
    {
        if(root == NULL)  root = new_Node;

        else
        {
            TreeNode* temp = root;
            while(temp != NULL)
            {
                if(new_Node -> data == temp->data) cout<<"Data exist"<<endl;

                else if((new_Node -> data < temp -> data) && (temp -> left == NULL))
                {
                    temp->left = new_Node;
                    break;
                }
                else if(new_Node->data < temp->data)
                {
                    temp = temp->left;
                }
                else if((new_Node->data > temp->data) && (temp->right == NULL))
                {
                    temp->right = new_Node;
                    break;
                }
                else temp = temp->right;
            }
        }
    }

    void preOrder(TreeNode* r)
    {
        if(r == NULL)
            return;
        cout<<r->data<<"\t";
        preOrder(r->left);
        preOrder(r->right);
    }

    void inOrder(TreeNode* r)
    {
        if(r == NULL)
            return;
        inOrder(r->left);
        cout<<r->data<<"\t";
        inOrder(r->right);
    }

    void postOrder(TreeNode* r)
    {
        if(r == NULL)
            return;
        postOrder(r->left);
        postOrder(r->right);
        cout<<r->data<<"\t";
    }
};

int main()
{
    int arr[10];

    cout<<"Insert 10 Unique Data: ";
    for(int i=0;i<10;i++) cin>>arr[i];

    BinarySearchTree B;
    TreeNode* new_Node = new TreeNode();
    TreeNode* new_Node1 = new TreeNode();
    TreeNode* new_Node2 = new TreeNode();
    TreeNode* new_Node3 = new TreeNode();
    TreeNode* new_Node4 = new TreeNode();
    TreeNode* new_Node5 = new TreeNode();
    TreeNode* new_Node6 = new TreeNode();
    TreeNode* new_Node7 = new TreeNode();
    TreeNode* new_Node8 = new TreeNode();
    TreeNode* new_Node9 = new TreeNode();


    new_Node->data = arr[0];
    new_Node1->data = arr[1];
    new_Node2->data = arr[2];
    new_Node3->data = arr[3];
    new_Node4->data = arr[4];
    new_Node5->data = arr[5];
    new_Node6->data = arr[6];
    new_Node7->data = arr[7];
    new_Node8->data = arr[8];
    new_Node9->data = arr[9];


    B.insertNode(new_Node);
    B.insertNode(new_Node1);
    B.insertNode(new_Node2);
    B.insertNode(new_Node3);
    B.insertNode(new_Node4);
    B.insertNode(new_Node5);
    B.insertNode(new_Node6);
    B.insertNode(new_Node7);
    B.insertNode(new_Node8);
    B.insertNode(new_Node9);

    cout<<"PRE_ORDER: ";
    B.preOrder(new_Node);
    cout<<endl;
    cout<<"POST_ORDER: ";
    B.postOrder(new_Node);
    cout<<endl;
    cout<<"IN_ORDER: ";
    B.inOrder(new_Node);
    cout<<endl;
    return 0;
}
