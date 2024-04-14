#include<iostream>
using namespace std;
int max(int arr[],int size)
{
    int temp=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]>arr[temp])
        {
            temp=i;
        }
    }
    cout<<"The Maximum Element in the Given Array is "<<arr[temp];
}
int main()
{
    int arr[100],size;
    cout<<"enter Size of Array :";
    cin>>size;
    cout<<"Enter Elements Of Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    max(arr,size);
    return 0;
}