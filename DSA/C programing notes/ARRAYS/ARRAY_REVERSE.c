


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,s;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE VALUE OF ELEMENTS AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("NEW ARRAY AFTER REVERSING IS ");
    for(i=size-1;i>=0;i--)
    {
       printf("%d ",a[i]);
    }
return 0;
}