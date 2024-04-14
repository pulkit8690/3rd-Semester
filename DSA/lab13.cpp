#include <iostream>
using namespace std;

int main() {
    int m,t,i,j,l,b,z=0,x;
    cin>>m>>t;
    int a[m][m][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            for(l=0;l<m;l++)
            {
                cin>>a[i][j][l];
            }
        }
    }
    for(b=0;b<t;b++)
    {
        x=a[0][0][0];
        
        for(j=0;j<m;j++)
        {
        if(j%2==0)
        {
            
            for(i=0;i<m;i++)
            {
                z=a[i][j][i];
            a[i][j][i]=x;
            x=z;
            }
            
            
        }
        else
        {
            for(i=m-1;i>=0;i--)
            {
              z=a[i][j][i];  
            a[i][j][i]=x;
            x=z;
            }
        }
        }
        a[0][0][0]=x;
        
        
        
        
        x=a[m-1][0][0];
        
        for(j=0;j<m;j++)
        {
        if(j%2==1)
        {
            
            for(i=0;i<m;i++)
            {
                z=a[i][j][m-1-i];
            a[i][j][m-1-i]=x;
            x=z;
            }
            
            
        }
        else
        {
            for(i=m-1;i>=0;i--)
            {
                z=a[i][j][m-i-1];
            a[i][j][m-1-i]=x;
            x=z;
            }
        }
        }
        a[m-1][0][0]=x;
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            for(l=0;l<m;l++)
            {
                cout<<a[i][j][l]<<" ";
            }
        }
    }
    
    
    // your zode goes here
    return 0;
}


