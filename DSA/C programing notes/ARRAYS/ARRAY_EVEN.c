


#include<stdio.h>
int main()
{
    int a[100];
    int i,size,even=0,odd=0;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d",&size);
    printf("ENTER THE ELEMENTS IN ARRAY AT PARTICULAR INDEX NUMBER\n");
    for(i=0;i<size;i++)
    {
        printf("ELEMENT AT %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("TOTAL EVEN NUMBERS ARE : %d \n",even);
    printf("TOTAL ODD NUMBERS ARE : %d \n",odd);
return 0;
}