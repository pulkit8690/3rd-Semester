#include<iostream>
using namespace std;
int sort(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int  print(int arr[],int size)
{
    for(int i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int insert(int arr[],int size,int num,int pos)
{
    for(int i =size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
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
    int pos,num;
    cout<<"Enter Number you want to insert : "<<endl;
    cin>>num;
    cout<<"At which Index Number? "<<endl;
    cin>>pos;
     //sort(arr,size);
     insert(arr,size,num,pos);
     print (arr,size);
    return 0;
}