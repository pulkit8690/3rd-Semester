#include<iostream>
using namespace std;
class heap
{
    public: 
    int arr[100];
    int size;

    heap()
    {
        arr[0]=-1;
        int size=0;
    }

    void swap(int a,int b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    void insert(int value)
    {
        cout<<"Insertion Starts"<<endl;
        // Step 1: jo value insert krni hai usko end pe daaldo
        size=size+1;
        int index=size;
        arr[index]=value;

        // Step 2: uss value ko abb uski correct position meh le aayo

        while(index>1)
        {
            int parent=index/2;

            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }

            else
            {
                return ;
            }
        }
    }

    void print()
    {
        cout<<"Elements Of Heap are : "<<endl;
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    heap h;
    int arr[100];
    cout<<"Enter Size of Heap"<<endl;
    int size;
    cin>>size;
    cout<<"Enter Elements Of heap "<<endl;
    for(int i=1;i<=size;i++)
    {
        h.insert(i);
    }

    // h.insert(23);
    // h.insert(21);
    // h.insert(43);
    // h.insert(2);
    // h.insert(100);
    h.print();
    return 0;
}