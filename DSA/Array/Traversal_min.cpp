#include<iostream>
using namespace std;
int min(int arr[],int size)
{
    int temp=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[temp])
        {
            temp=i;
        }
    }
    cout<<arr[temp];
    return arr[temp];
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
    min(arr,size);
    return 0;
}