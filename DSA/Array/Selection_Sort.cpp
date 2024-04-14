#include <iostream>
using namespace std;
int Selection(int arr[], int size)
{
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
    Selection(arr,size);
    return 0;
}