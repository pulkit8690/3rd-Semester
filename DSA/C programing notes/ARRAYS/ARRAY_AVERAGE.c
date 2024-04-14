
// PROGRAM TO FIND AVERAGE OF THE ARRAY ELEMENTS


#include<stdio.h>
int main()
{
    printf("PROGRAM TO FIND AVERAGE OF NUMBERS\n");
    printf("----------------------------------\n");
    int a[100];
    int i,size,sum=0;
    float avg;
    printf("ENTER THE SIZE EOF THE ARRAY : ");
    scanf("%d",&size);
    printf("Enter the elements of an array\n");
    for(i=0;i<size;i++)
    {
        printf("Element at index %d : ",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("----------------------------------\n");
    
    avg= (float)sum /size;
    printf("AVERAGE OF ENTERED NUMBERS IS %.2f",avg);
return 0;
}