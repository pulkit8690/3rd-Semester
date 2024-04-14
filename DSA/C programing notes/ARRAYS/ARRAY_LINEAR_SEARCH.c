// LINEAR SEARCH 


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,key,s,temp=0;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE VALUE OF ELEMENTS AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    { 
        printf("ELEMENT %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO SEARCH : ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
        temp++;
        s=i;
        break;
        }
    }
        if(temp==1)
        printf("THE ELEMENT %d IS PRESENT AT INDEX NUMBER %d ",key,s);
        else
        printf("THE ELEMENT YOU WANT TO SEARCH IS NOT PRESENT IN THE LIST ");
   
return 0;
}