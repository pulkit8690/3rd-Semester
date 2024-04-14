#include<iostream>
using namespace std;
int del(int arr[],int size,int pos)
{
    for(int i=size;i>pos-1;i--)
    {
        arr[i]=arr[i+1];
    }
}
int  print(int arr[],int size)
{
    for(int i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100], size;
    cout<<"Enter Size Of Array ";
    cin>>size;
    cout << "Enter Unsorted array" << endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i<<" ";
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the element you want to delete :";
    cin>>ele;
    int pos;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
             pos=i;
            cout<<"Element u want to delete is found at index no. "<<pos<<endl;
            
        }
        // else
        // {
        //     cout<<"element not found in array"<<endl;
        //     break;
        // }
    }
    del(arr,size,pos);
    print(arr,size);

    return 0;
}