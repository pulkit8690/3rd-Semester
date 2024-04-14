#include<iostream>
using namespace std;
int print(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<"Element at Index number "<<i<<" is "<<arr[i]<<endl;
    }
}
int main()
{
    int arr[100],size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    cout<<"Enter Elements of the Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i<<" ";
        cin>>arr[i];
    }
    print(arr,size);
    return 0;
}