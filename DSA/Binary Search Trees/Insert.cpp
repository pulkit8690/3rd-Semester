#include<iostream>
#include<queue>
using namespace std;

class node
{
    public: 
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

node* insertintoBST(node* root,int data)
{
    if(root==NULL)
    {
        root=new node(data);
        return root;
    }

    if(data>root->data)
    {
        root->right=insertintoBST(root->right,data);
    }

    if(data<root->data)
    {
        root->left=insertintoBST(root->left,data);
    }

    return root;
}
void takeinput(node* root)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=insertintoBST(root,data);
        cin>>data;
    }
}

int main()
{
    node* root=NULL;
    cout<<"Enter data to Create BST: "<<endl;
    takeinput(root);

    cout<<"PRINTING BST";
    return 0;
}