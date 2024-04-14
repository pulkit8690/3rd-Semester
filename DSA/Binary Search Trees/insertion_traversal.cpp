#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *inserttoBST(node *root, int data)
{

    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = inserttoBST(root->right, data);
    }

    else
    {
        root->left = inserttoBST(root->left, data);
    }

    return root;
}

void takinginput(node * &root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = inserttoBST(root, data);
        cin >> data;
    }
}

// TRAVERSAL CODE

//(i) INORDER TRAVERSAL(LNR)

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//(ii) PREORDER TRAVERSAL (NLR)
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

    
}

//(iii) POSTORDER TRAVERSAL (LRN)
void postorder(node *root)
{
    
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;

    cout<<"Enter Data to Create BST"<<endl;
    takinginput(root);

    cout << "PREORDER TRAVERSAL" << endl;
    preorder(root);
    cout << endl;

    cout << "INORDER TRAVERSAL" << endl;
    inorder(root);
    cout << endl;

    cout << "POSTORDER TRAVERSAL"<<endl;
    postorder(root);
    cout << endl;

    return 0;
}