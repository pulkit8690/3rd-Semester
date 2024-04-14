


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,min;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE ELEMENTS OF AN ARRAY AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT AT INDEX NUMBER %d : ",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("The Minimum value is %d",min);
return 0;
}