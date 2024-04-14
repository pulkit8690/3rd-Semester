// program to find the sum of the array


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,sum=0;
    printf("Enter size of array\n");
    scanf("%d",&size);
    printf("ENTER ELEMENTS OF AN ARRAY\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT %d : ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n");
    printf("THE SUM OF ENTERED ELEMENTS IS : %d",sum);

return 0;
}