#include<stdio.h>
int main()
{
      
 int ch = 'a' + 'b';
switch(ch)
{
case 'a ':
case 'b ':  printf("\n ab prints");
case 'A':  printf("\n A prints");
case 'b'+'a' : printf("\n You are welcome");
case '+':  printf("\n Just add you") ;
default:  printf("\n Trapped in default");
}
 return 0;
}