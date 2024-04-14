#include<iostream>

using namespace std;
class Stack
{
    public: 
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top= -1;
    }

    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack Underflow";
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool empty()
    {
        if(top==-1)
        {
            return true;
        }

        else{
            return false;
        }
    }
};
int main()
{
    Stack s1(5);
    s1.push(2);
    s1.push(1);
    s1.push(5);
    s1.push(3);
    s1.push(44);
    s1.push(0);

    cout<<"Top value is "<<s1.peek()<<endl;

    s1.pop();

    cout<<"Top value is "<<s1.peek()<<endl;

    if(s1.empty())
    {
        cout<<" Stack is Empty";
    }
    else{
        cout<<"stack is not empty";
    }

    return 0;
}