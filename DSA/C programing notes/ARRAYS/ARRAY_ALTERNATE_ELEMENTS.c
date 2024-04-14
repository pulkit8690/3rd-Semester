


#include<stdio.h>
int main()
{
    int a[100];
    int i,size;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE VALUE OF ELEMENTS AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("TO PRINT ALTERNATE ELEMENTS\n");
    printf("NEW ARRAY IS : ");
    for(i=0;i<size;i++)
    {
        if(i%2==0)
        printf("%d ",a[i]);
    }
return 0;
}