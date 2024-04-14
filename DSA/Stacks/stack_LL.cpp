#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    ~Node()
    {
        int value=this->data;
        if(this->next==NULL)
        {
            delete next;
            next=NULL;
        }
    }

    
};

void push(Node* &Head,int data)
    {
        Node* temp=new Node(data);
        if(temp==NULL)
        {
            cout<<"overflow"<<endl; 
        }
        else
        {
            temp->data=data;
            temp->next=Head;
            Head=temp;
        }
    }

    void pop(Node* &Head)
    {
        if(Head==NULL)
        {
            cout<<"underflow"<<endl;
        }

        else
        {
            Node* temp=Head;
            Head=Head->next;
            delete temp;
        }
    }

    void display(Node* &Head)
    {
        if(Head==NULL)
        {
            cout<<"UNDERFLOW"<<endl;
        }

        else
        {
            Node* temp = Head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }

    void top(Node* Head)
    {
    if(Head==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        Node* temp=Head;
        cout<<"Data at top is" <<temp->data<<endl;
    }
    }

    bool empty(Node *Head)
    {
        if(Head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else{
            cout<<"Stack is not empty"<<endl;
            return false;
        }
    }

int main()
{
    // Node* node1=new Node(13);
    // Node* Head=node1;
    // push(Head,14);
    // display(Head);
    // push(Head,15);
    // display(Head);
    // push(Head,16);
    // display(Head);
    // push(Head,17);
    // display(Head);
    // push(Head,18);
    // display(Head);
    // pop(Head);
    // display(Head);
    // top(Head);
    // empty(Head);
    Node* Head=NULL;
    int size;
    int data;
    cout<<"Enter the size of Stack: ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Data "<<i+1<<": ";
        cin>>data;
        push(Head,data);
    }
    display(Head);
    pop(Head);
    display(Head);
    empty(Head);
    top(Head);
    return 0;
}