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

node * deletefromBST(node* root,int val)
{
    if(root==NULL)
    {
        return root;
    }

    if(root->data==val)
    {
    //0 child
    if(root->left==NULL && root->right==NULL)
    {
        delete root;
        return NULL;
    }

    //1 child
    
       //left child

       if(root->left!=NULL && root->right==NULL)
       {
        node* temp=root->left;
        delete root;
        return temp;
       }

       //Right child

       if(root->left==NULL && root->right!=NULL)
       {
        node* temp=root->right;
        delete root;
        return temp;
       }

    //2 child

    if(root->left!=NULL && root->right!=NULL)
    {
        int mini=minval(root->right)->data;
        root->data=mini;
        root->right=deletefromBST(root->right,mini);
        return root;
    }
    } 


    else if(root->data>val)
    {
        root->left=deletefromBST(root->left,val);
        return root;
    }

    else
    {
        root->right=deletefromBST(root->right,val);
        return root;
    }
}
int main()
{
    node *root = NULL;
    cout << "Enter Data of BST: " << endl;
    takinginput(root);
    cout<<endl;

    

    return 0;
}