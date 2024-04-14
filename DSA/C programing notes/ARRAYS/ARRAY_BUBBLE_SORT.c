// SORTING OF ARRAY BUBBLE SORT   


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,j,temp;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE VALUE OF ELEMENTS AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("ARRAY AFTER SORTING : ");
    for(i=0;i<size;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}

