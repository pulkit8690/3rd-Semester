#include<iostream>
#include<stack>
using namespace std;
int ppp(string str)
{
    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        if(ch =='('||ch =='{'||ch =='[')
        {
        s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if((ch=='}'&& top=='{')
                ||(ch==')'&& top=='(')
                ||(ch==']'&& top=='['))
                {
                    s.pop();
                }
                else
                {
                    return -1;
                }
            }
            else{
                return -1;
            }
        }
    }   
}
int main()
{
    string str;
    cout<<"Enter parenthesis statement: ";
    cin>>str;
    int ans=ppp(str);
    if(ans==-1)
    {
        cout<<"Unbalanced";
    }
    else{
        cout<<"Balanced";
    }


    return 0;
}