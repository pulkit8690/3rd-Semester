// #include<iostream>
// using namespace std;

// int main()
// {
//     int *ptr=0;
//     int a=10;
//     *ptr=a;
//     cout<<*ptr;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void Q(int z)
// {
//     z += z;

//     cout << z << " ";
// }

// void P(int *y)

// {

//     int x = *y + 2;

//     Q(x);

//     *y = x - 1;

//     cout << x << " ";
// }

// int main()

// {

//     int x = 5;

//     P(&x);

//     cout << x;

//     return 0;
// }


#include<iostream>
using namespace std;
void update(int **p2)
{
    //p2=p2+1;-------> no change
    //*p2=*p2+1;------> change
    **p2=**p2+1;
    
}
int main()
{
    int num =5;
    int *p1=&num;
    int **p2=&p1;
    cout<<"BEFORE"<<endl;
    cout<<num<<endl<<p1<<endl<<p2<<endl;
    update(p2);
    cout<<"AFTER"<<endl;
    cout<<num<<endl<<p1<<endl<<p2<<endl;
    return 0;
}