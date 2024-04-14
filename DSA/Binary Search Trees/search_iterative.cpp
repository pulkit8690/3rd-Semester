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

bool treesearch(node* root,int x)
{
    node* temp=root;

    while(temp!=NULL)
    {
        if(temp->data=x)
        {
            return true;
        }

        if(x>temp->data)
        {
            temp=temp->right;
        }
        else
        {
           temp = temp->left;
        } 
    }
    return false;
 }
int main()
{
    node *root = NULL;
    cout << "Enter Data of BST: " << endl;
    takinginput(root);
    cout<<endl;

    cout<<"Enter Number You want to search: "<<endl;
    int x;
    cin>>x;
    treesearch(root,x);
    return 0;
    
}
