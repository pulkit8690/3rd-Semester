#include<iostream>
using namespace std;

int main()
{
    //cout has different behaviour for int and char array;
    char ch[5]= "abcd";//last element of char array is Null 
    cout<<"ch is "<<ch<<endl;
    cout<<"&ch is "<<&ch<<endl;
    cout<<"ch[0] is "<< ch[0]<<endl;
    cout<<"ch[1] is "<< ch[1]<<endl;
    cout<<"ch[5] is "<< ch[5]<<endl;//null

    cout<<"-------------" <<endl;
    char *p=&ch[0];
    cout<<"*p is "<<*p<<endl;
    cout<<"p is "<<p<<endl;
    cout<<"&ch is "<<&ch<<endl;

    cout<<"------------"<<endl;
    char temp ='z';
    char *pt=&temp;
    cout<<"pt is "<<pt<<endl;


    return 0;
}