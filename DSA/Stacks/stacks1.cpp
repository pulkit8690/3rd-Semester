#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(7);
    s.push(10);
    s.pop();
    cout<<"Top element is : " << s.top()<<endl;
    if(s.empty())
    {
        cout<<"Stack is Empty"<<endl;

    }
    else{
        cout<<"Stack not empty";
    }
    
    return 0;
}