


#include<stdio.h>
int main()
{
    int s1,s2,i,j;
    int a[100][100];
    printf("ENTER ROWS AND COLOUMS : ");
    scanf("%d %d",&s1,&s2);
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("ELEMENT AT a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n"); 
    }
return 0;
}