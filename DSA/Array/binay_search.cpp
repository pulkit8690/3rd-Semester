#include<iostream>
using namespace std;
int Binary(int arr[], int size,int key)
{
    int s=0,e=size,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(mid==key)
        {
            cout<<"The Element is found at index number "<<mid;
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[100], size,key;
    cout<<"Enter Size Of Array ";
    cin>>size;
    cout << "Enter Unsorted array" << endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i<<" ";
        cin>>arr[i];
    }
    cout<<"Enter Element to Search";
    cin>>key;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[i])
            {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            }
        }
    }
    cout << "Sorted Array is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    Binary(arr,size,key);
    return 0;
}