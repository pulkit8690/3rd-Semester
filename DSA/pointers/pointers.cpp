#include<iostream>
using namespace std;

int main()
{
    int num =5;
    int *p=&num;
    cout<<"num is :"<<num<<endl;
    cout<<"p is : "<<p<<endl;
    cout<<"*p is : "<<*p<<endl;
    cout<<"p+1 is  : "<<p+1<<endl;
    cout<<"num+1 is :"  <<num+1<<endl;
    cout<<"*p+1 is : "<<*p+1<<endl;
    cout<<"(*p)+1 is "<<(*p)+1<<endl;
    return 0;
}