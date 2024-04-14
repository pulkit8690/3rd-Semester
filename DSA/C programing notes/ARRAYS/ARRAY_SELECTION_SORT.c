// SORTING OF ARRAY BY SELECTION SORT


#include<stdio.h>
int main()
{
    int a[100];
    int i,j,size,min,temp;
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE VALUE OF ELEMENTS AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT AT %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
             if(a[j]<a[min])
             {
                 min=j;
             }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("ARRAY AFTER SORTING : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}