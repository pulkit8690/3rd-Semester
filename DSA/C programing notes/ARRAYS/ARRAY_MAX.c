


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,max;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER ELEMENTS IN AN ARRAY AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT AT INDEX NO. %d : ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
       if(a[i]>max)
       max=a[i];
    }
    printf("THE MAX VALUE OF AN ELEMENT IS %d",max);
    
return 0;
}