#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,5,8,10,14};
    
    cout<<"arr is :"<<arr<<endl;//address of 0 index
    cout<<"arr[0] is "<<arr[0]<<endl;//element of 0 index
    cout<<"arr[1] is "<<arr[1]<<endl;//element of 1 index
    cout<<"&arr[0] is "<<&arr[0]<<endl;//address of 0 index
    cout<<"&arr[1] is "<<&arr[1]<<endl;//address of 1 index

    cout<<"---------------------"<<endl;
    int *p=&arr[0];
    cout<<"*p is "<<*p<<endl;
    cout<<"&p is "<<&p<<endl;

    cout<<"---------------------"<<endl;
    cout<<"sizeof(arr) is "<<sizeof(arr)<<endl;
    cout<<"sizeof(p) is "<<sizeof(p)<<endl;
    cout<<"sizeof(*p) is "<<sizeof(*p)<<endl;
    cout<<"sizeof(&p) is "<<sizeof(&p)<<endl;

    cout<<"-------------------"<<endl;
    cout<<"arr[2] is "<<arr[2]<<endl;
    cout<<"*(arr+2) is " <<*(arr+2)<<endl;
    cout<<"2[arr] is "<<2[arr]<<endl;
    cout<<"*(2+arr) is "<<*(2+arr)<<endl;


    return 0;
}