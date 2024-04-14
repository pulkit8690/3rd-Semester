#include<stdio.h>
int main()
{
     int i,s1,j,s2;
    int s3,s4,m,n;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    printf("ENTER DETAILS OF MATRIX 1\n");
    printf("-------------------------\n");
    printf("ENTER NO. OF ROWS AND COLOUM : ");
    scanf("%d %d",&s1,&s2);
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("ELEMENT AT a[%d][%d] :  ",i,j); 
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }
     for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nENTER DETAILS OF MATRIX 2\n");
    printf("-------------------------\n");
    printf("ENTER NO. OF ROWS AND COLOUM : ");
    scanf("%d %d",&s3,&s4);
    for(i=0;i<s3;i++)
    {
        for(j=0;j<s4;j++)
        {
            printf("ELEMENT AT b[%d][%d] :  ",i,j);
            scanf("%d",&b[i][j]);
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

return 0;
}