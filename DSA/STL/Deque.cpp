#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    cout<<"Max Size-> "<<dq.max_size()<<endl;
    cout<<"Size-> "<<dq.size()<<endl;

    dq.push_front(2);
    dq.push_back(4);
    dq.push_front(6);
    dq.push_back(8);
    dq.push_back(10);
    

    for(int i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size-> "<<dq.size()<<endl;

    cout<<"Element at index number 1->"<<dq.at(1)<<endl;

    cout<<"Element at Front-> "<<dq.front()<<endl;

    cout<<"Element at Back-> "<<dq.back()<<endl;
    

    cout<<"POPPING Back"<<endl;
    dq.pop_back();
    for(int i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"POPPING Front"<<endl;
    dq.pop_front();
    for(int i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Erasing"<<endl;
    dq.erase(dq.begin(),dq.end()-1);
    for(int i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size-> "<<dq.size()<<endl;

    





    return 0;
}