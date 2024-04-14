#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

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
}

void takinginput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = inserttoBST(root, data);
        cin >> data;
    }
}

node * minval(node* root)
{
    node * temp = root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

node * maxval(node* root)
{
    node * temp= root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }

    return temp;
}
int main()
{
    node *root = NULL;
    cout << "Enter Data of BST: " << endl;
    takinginput(root);
    cout<<endl;

    cout<<"maximum value of tree is "<<maxval(root)->data<<endl;
    cout<<"minimum value of tree is "<<minval(root)->data<<endl;

    return 0;
}