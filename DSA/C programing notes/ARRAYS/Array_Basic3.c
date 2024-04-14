// READ AND PRINT THE ELEMENTS OF ARRAY



#include<stdio.h>
int main()
{
    int a[6];
    int i;
   
    for(i=0;i<6;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("THE ENTERED ARRAY IS \n");
    for(i=0;i<6;i++)
    {
    printf("%d " ,a[i]);
    }
return 0;
}