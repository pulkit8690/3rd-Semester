#include<iostream>
using namespace std;
int bubble(int arr[],int size)
{
    int counter=1;
    while(counter< size)
    {
        for(int i = 0 ;i<size-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i+1];
                arr[i+1]= arr[i];
                arr[i]=temp;
            }
        }
        counter++;
    }
    cout<<"Sorted Array  is "<<endl;
    for(int i =0;i<size;i++)
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
    bubble(arr,size);
    
    return 0;
}