#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> arr={1,2,3,4,5};

    int size = arr.size();
    cout<<"Size Of Array is "<<size<<endl;

    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Element at Index Number 2 is "<<arr.at(2)<<endl;

    cout<<"Empty or Not Empty "<<arr.empty()<<endl;

    cout<<"Element at Front "<<arr.front()<<endl;

    cout<<"Element at End "<<arr.back()<<endl;

    arr.fill(10);
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}