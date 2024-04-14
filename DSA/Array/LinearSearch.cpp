#include<iostream>
using namespace std;
int linear(int arr[],int size,int data)
{
    int found =0;
    for(int i = 0;i<size;i++)
    {
        if(arr[i]==data)
        {
            cout<<"Element "<<data<<" is found at index number "<<i;
            found++;
            break;
        }
    }
    if(found==0)
    {
        cout<<"Element not present";
    }
}
int main()
{
    int arr[100],size,data;
    cout<<"Enter the size of Array : ";
    cin>>size;
    cout<<"Enter Elements of the Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i<<" ";
        cin>>arr[i];
    }
    cout<<"Enter Element to be Searched : ";
    cin>>data;
    linear(arr,size,data);
    return 0;
}