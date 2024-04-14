#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector has a ability to Double its capacity
    // Size is Total No. of Elements present and Capacity is Total No. of elements that can be added
    vector<int> vec;

    cout << "Capacity->" << vec.capacity() << endl;

    vec.push_back(1);
    cout << "Capacity->" << vec.capacity() << endl;

    vec.push_back(3);
    cout << "Capacity->" << vec.capacity() << endl;

    vec.push_back(5);
    cout << "Capacity->" << vec.capacity() << endl;

    vec.push_back(7);
    cout << "Capacity->" << vec.capacity() << endl;

    vec.push_back(9);
    cout << "Capacity->" << vec.capacity()<<endl;

    cout << "Size->" << vec.size()<<endl;

    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at 2 index number->"<<vec.at(2)<<endl;

    cout<<"Elememt at Front is "<<vec.front()<<endl;

    cout<<"Elememt at back is "<<vec.back()<<endl;

    cout<<"Before Poping"<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"After Poping"<<endl;
    vec.pop_back();
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout << "Size Before Clear->" << vec.size()<<endl;
    vec.clear();
    cout << "Size After Clear->" << vec.size()<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"NEW VECTOR"<<endl;
    vector<int> vec1(5,1);
    for(int i:vec1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"COPY Vector"<<endl;
    // vec2 is copy of vec1;
    vector <int> vec2(vec1); 
    for(int i:vec2)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    



    return 0;
}